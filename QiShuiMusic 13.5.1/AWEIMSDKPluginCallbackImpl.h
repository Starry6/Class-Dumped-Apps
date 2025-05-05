@interface AWEIMSDKPluginCallbackImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_logService:name:data:;
- (BOOL)iesim_shouldFilterMessage:messageContent:;
- (id)init;
+ (id)sharedInstance;
@end
