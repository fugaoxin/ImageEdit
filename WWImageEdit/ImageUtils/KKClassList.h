
#import <Foundation/Foundation.h>

@interface KKClassList : NSObject

//获取所有子类
+ (NSArray*)subclassesOfClass:(Class)parentClass;

@end
