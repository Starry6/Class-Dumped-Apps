@interface IESLiveGiftTouchMessageManager : NSObject
@property (nonatomic) NSMutableDictionary displayPosition2UidMessage;
@property (nonatomic) NSMutableDictionary displayPosition2UidMessageBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayPosition2UidMessageBlock;
- (id)displayPosition2UidMessage;
- (id)getUidToMessageBlockArrWithDisplayPosition:;
- (id)getUidToMessageDicWithDisplayPosition:;
- (id)initWithDIContext:;
- (void)receiveGiftTouchMessage:withDisplayPositionType:;
- (void)registerMessageNotificationWithUid:displayPositionType:messageUpdateBlock:;
- (void)setDisplayPosition2UidMessage:;
- (void)setDisplayPosition2UidMessageBlock:;
- (void)unRegisterMessageNotificationWithUid:displayPositionType:messageUpdateBlock:;
- (void)setUp;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
