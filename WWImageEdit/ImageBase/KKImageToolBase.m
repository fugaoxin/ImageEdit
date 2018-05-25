
#import "KKImageToolBase.h"

@implementation KKImageToolBase

- (id)initWithImageEditor:(KKImageEditorViewController*)editor withToolInfo:(KKImageToolInfo *)info{
    self = [super init];
    if(self){
        self.editor   = editor;
        self.toolInfo = info;
    }
    return self;
}

- (void)setup
{
    
}

- (void)cleanup
{
    
}

- (void)executeWithCompletionBlock:(void(^)(UIImage *image, NSError *error, NSDictionary *userInfo))completionBlock
{
    completionBlock(self.editor.imageView.image, nil, nil);
}


#pragma mark- protocol
+ (UIImage*)defaultIconImage{
    return nil;
}

+ (NSString*)defaultTitle{
    return @"toolTitle";
}

+ (NSArray*)subtools{
    return nil;
}

+ (NSUInteger)orderNum{
    return 0;
}

@end
