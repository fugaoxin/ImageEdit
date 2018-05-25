
#import <UIKit/UIKit.h>
@class KKTextTool;

static NSString* const kTextViewActiveViewDidTapNotification = @"kTextViewActiveViewDidTapNotification";

@interface KKTextView : UIView

+ (void)setActiveTextView:(KKTextView*)view;
- (id)initWithTool:(KKTextTool*)tool;

- (void)setLableText:(NSString *)text;
- (NSString *)getLableText;

@end
