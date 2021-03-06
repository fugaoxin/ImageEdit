
#import <UIKit/UIKit.h>
#import "KKImageToolInfo.h"

/**
 工具栏的menu item
 */
@interface KKToolBarItem : UIView

@property (nonatomic, assign) BOOL selected;
@property (nonatomic, strong) UIImageView *iconView;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) KKImageToolInfo *imgToolInfo;

- (instancetype)initWithFrame:(CGRect)frame target:(id)target action:(SEL)action toolInfo:(KKImageToolInfo*)toolInfo;

@end
