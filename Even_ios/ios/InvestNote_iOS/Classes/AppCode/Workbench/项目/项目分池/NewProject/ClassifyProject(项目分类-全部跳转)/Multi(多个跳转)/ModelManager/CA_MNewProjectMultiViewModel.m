//
//  CA_MNewProjectMultiViewModel.m
//  InvestNote_iOS
//
//  Created by 野猪哥 on 2018/6/28.
//  Copyright © 2018年 韩云智. All rights reserved.
//

#import "CA_MNewProjectMultiViewModel.h"

@implementation CA_MNewProjectMultiViewModel

-(NSMutableArray *)dataSource{
    if (!_dataSource) {
        _dataSource = @[].mutableCopy;
        [self requestData];
    }
    return _dataSource;
}

-(void)requestData{
    
}

@end
