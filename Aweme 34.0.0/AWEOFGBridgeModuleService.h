@interface AWEOFGBridgeModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)handleIESBridgeWithContextInfo:;
- (BOOL)handleTTBridgeWithContextInfo:;
- (BOOL)handleMessage:exector:resultHandler:;
- (BOOL)isAuthorizedForMethod:withURL:;
@end
