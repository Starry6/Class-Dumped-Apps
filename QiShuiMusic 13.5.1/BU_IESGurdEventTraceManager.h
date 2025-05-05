@interface BU_IESGurdEventTraceManager : NSObject
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) NSMutableDictionary messagesDictionary;
@property (nonatomic) NSDateFormatter messageDateFormatter;
@property (nonatomic) NSMutableArray networkInfosArray;
- (id)messageDateFormatter;
- (id)messagesArray;
- (id)messagesDictionary;
- (id)networkInfosArray;
- (void)setMessageDateFormatter:;
- (void)setMessagesArray:;
- (void)setMessagesDictionary:;
- (void)setNetworkInfosArray:;
- (void).cxx_destruct;
+ (id)formedMessageWithMessage:;
+ (void)traceEventWithMessageInfo:;
+ (void)traceNetworkWithInfo:;
+ (id)sharedManager;
@end
