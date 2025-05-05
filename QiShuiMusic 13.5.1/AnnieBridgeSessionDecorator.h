@interface AnnieBridgeSessionDecorator : NSObject
+ (Class)lynxSessionDecorator;
+ (void)setLynxSessionDecorator:;
+ (void)setTtBridgeSessionDecorator:;
+ (void)setWebSessionDecorator:;
+ (Class)ttBridgeSessionDecorator;
+ (Class)webSessionDecorator;
@end
