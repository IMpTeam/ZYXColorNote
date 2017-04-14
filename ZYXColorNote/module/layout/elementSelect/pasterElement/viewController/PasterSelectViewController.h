//
//  PasterSelectViewController.h
//  TourNote
//
//  Created by 极客天地 on 2017/2/24.
//  Copyright © 2017年 极客天地. All rights reserved.
//

#import "GWRootViewController.h"
#import "PasterViewModel.h"
typedef void (^PasterDidSelectedBlock)(PasterModel * pasterModel);
@interface PasterSelectViewController : GWRootViewController
@property(copy,nonatomic) PasterDidSelectedBlock pasterDidSelectedBlock;
-(void)setPasterDidSelectedBlock:(PasterDidSelectedBlock)pasterDidSelectedBlock;
@end