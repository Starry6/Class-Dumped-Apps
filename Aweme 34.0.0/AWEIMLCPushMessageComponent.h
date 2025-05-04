@interface AWEIMLCPushMessageComponent : AWEIMComponentBase
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)componentDidMounted:;
+ (BOOL)canCreateComponentWithContext:;
@end
