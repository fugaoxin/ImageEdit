

#import <UIKit/UIKit.h>
@class KKEmoticonTool;

@interface KKEmoticonView : UIView

- (instancetype)initWithImage:(UIImage *)image tool:(KKEmoticonTool *)tool;

/**
 设置当前选中的表情

 @param view 表情view
 */
+ (void)setActiveEmoticonView:(KKEmoticonView*)view;
//- (void)setScale:(CGFloat)scale;

@end
