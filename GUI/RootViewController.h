//
//  RootViewController.h
//  EGORefreshDemo
//
//  Created by chen cheng on 14-3-10.
//  Copyright (c) 2014年 chen cheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"
#import "LoadMoreTableFooterView.h"

@interface RootViewController : UITableViewController<EGORefreshTableHeaderDelegate, LoadMoreTableFooterDelegate>
{
    EGORefreshTableHeaderView *_egoRefreshTableHeaderView;
    BOOL  _isRefreshing;
    
    
    LoadMoreTableFooterView *_loadMoreTableFooterView;
    BOOL  _isLoadMoreing;
    
    
    int   _dataRows;
}

@end
