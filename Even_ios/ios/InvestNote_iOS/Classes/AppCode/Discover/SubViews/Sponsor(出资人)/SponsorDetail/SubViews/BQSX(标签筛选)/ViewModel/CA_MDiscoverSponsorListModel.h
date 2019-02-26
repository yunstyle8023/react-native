//
//  CA_MDiscoverSponsorListModel.h
//  InvestNote_iOS
//
//  Created by 野猪哥 on 2018/5/21.
//  Copyright © 2018年 韩云智. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CA_MDiscoverSponsorData_list;

@interface CA_MDiscoverSponsorListModel : NSObject
//"data_type": "lp",
//"total_count": 122,
//"page_size": 10,
//"page_num": 1,
//"total_page": 13,
//"data_list": [
//              {
//                  "lp_name": "test",
//                  "lp_intro": "这是一个公司简介或者机构描述的语句存放的地方",
//                  "data_id": 1
//              }
//              ]
@property (nonatomic,copy) NSString *data_type;
@property (nonatomic,strong) NSNumber *total_count;
@property (nonatomic,strong) NSNumber *page_size;
@property (nonatomic,strong) NSNumber *page_num;
@property (nonatomic,strong) NSNumber *total_page;
@property (nonatomic,strong) NSMutableArray<CA_MDiscoverSponsorData_list *> *data_list;
@end
