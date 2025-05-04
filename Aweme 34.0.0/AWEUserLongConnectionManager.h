@interface AWEUserLongConnectionManager : NSObject
@property (nonatomic) NSSet hasPushSet;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)registerByteSync;
- (void)p_handleMessage:;
- (id)hasPushSet;
- (void)setHasPushSet:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
