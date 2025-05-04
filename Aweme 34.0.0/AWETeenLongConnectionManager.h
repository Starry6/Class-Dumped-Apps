@interface AWETeenLongConnectionManager : NSObject
@property (nonatomic) BOOL ignoreMessage;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)p_handleOnReceiveAWEPushServiceWithMsg:;
- (BOOL)ignoreMessage;
- (void)updateIgonreMessage:;
- (void)setIgnoreMessage:;
- (id)init;
- (void)dealloc;
+ (id)sharedManager;
@end
