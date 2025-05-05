@interface LynxTemplateBundle : NSObject
- (BOOL)constructContext:;
- (id)errorMsg;
- (id)initWithNativeBundle:;
- (id)initWithTemplate:option:;
- (BOOL)isElementBundleValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTemplate:;
- (id)extraInfo;
- (void)initWithOption:;
@end
