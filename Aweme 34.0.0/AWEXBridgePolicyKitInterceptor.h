@interface AWEXBridgePolicyKitInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBridgeContext:forMethod:container:params:;
- (void)xBridgeWillCallbackMethod:container:statusCode:message:resultModel:;
@end
