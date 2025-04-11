import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns

def read_data_from_file(filename):
    try:
        data = pd.read_csv(filename, names=["Day", "Stock Price"])
        return data
    except Exception as e:
        print(f"Error reading file: {e}")
        return None

def create_visualization(data):
    if data is None:
        return
    
    # Create a figure and axis
    fig, ax = plt.subplots(3, 3, figsize=(18, 12))
    
    # Plot the data
    ax[0, 0].plot(data["Day"], data["Stock Price"])
    ax[0, 0].set_title('Daily Stock Price Trend')
    ax[0, 0].set_xlabel('Day')
    ax[0, 0].set_ylabel('Stock Price')
    
    ax[0, 1].bar(data["Day"], data["Stock Price"])
    ax[0, 1].set_title('Daily Stock Price Bar Chart')
    ax[0, 1].set_xlabel('Day')
    ax[0, 1].set_ylabel('Stock Price')
    
    ax[0, 2].scatter(data["Day"], data["Stock Price"])
    ax[0, 2].set_title('Daily Stock Price Scatter Plot')
    ax[0, 2].set_xlabel('Day')
    ax[0, 2].set_ylabel('Stock Price')
    
    ax[1, 0].hist(data["Stock Price"], bins=10)
    ax[1, 0].set_title('Stock Price Distribution')
    ax[1, 0].set_xlabel('Stock Price')
    ax[1, 0].set_ylabel('Frequency')
    
    ax[1, 1].boxplot(data["Stock Price"])
    ax[1, 1].set_title('Stock Price Box Plot')
    ax[1, 1].set_xlabel('Stock Price')
    
    ax[1, 2].violinplot(data["Stock Price"])
    ax[1, 2].set_title('Stock Price Violin Plot')
    ax[1, 2].set_xlabel('Stock Price')
    
    ax[2, 0].plot(data["Day"], data["Stock Price"], marker='o')
    ax[2, 0].set_title('Daily Stock Price Trend with Markers')
    ax[2, 0].set_xlabel('Day')
    ax[2, 0].set_ylabel('Stock Price')
    
    ax[2, 1].scatter(data["Day"], data["Stock Price"], c=data["Stock Price"], cmap='viridis')
    ax[2, 1].set_title('Colored Daily Stock Price Scatter Plot')
    ax[2, 1].set_xlabel('Day')
    ax[2, 1].set_ylabel('Stock Price')
    
    ax[2, 2].axis('off')
    sns.heatmap(data.corr(), annot=True, cmap='coolwarm', ax=ax[2, 2])
    ax[2, 2].set_title('Correlation Heatmap')
    
    # Layout so plots do not overlap
    fig.tight_layout()
    
    plt.show()


filename = '13/data.txt'  # Replace with your file name
data = read_data_from_file(filename)
create_visualization(data)