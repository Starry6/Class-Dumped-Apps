@interface AWEPOILiveMessageALogHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleRegisterMsgSubscriber:;
- (void)handleUnRegisterMsgSubscriber:;
- (void)handleReleaseMsgCenter:extra:;
- (BOOL)handlePostMessage:withSubscriber:;
@end
