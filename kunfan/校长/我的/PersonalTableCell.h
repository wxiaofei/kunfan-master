//
//  PersonalTableCell.h
//  kunfan
//
//  Created by 坤凡 on 2017/3/6.
//  Copyright © 2017年 坤凡. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PersonalTableCell : UITableViewCell

- (void)updataCell:(NSString*)name andImage:(NSString*)image;
+ (NSString *)identifier;
@end
