

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface KKImageEditorTheme : NSObject

@property (nonatomic, strong) UIColor  *backgroundColor; //背景颜色
@property (nonatomic, strong) UIColor  *toolbarColor;    //工具栏颜色
@property (nonatomic, strong) NSString *toolIconColor;   //工具icon的背景颜色
@property (nonatomic, strong) UIColor  *toolbarTextColor;

+ (instancetype)theme;

@end
