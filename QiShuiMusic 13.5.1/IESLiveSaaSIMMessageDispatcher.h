@interface IESLiveSaaSIMMessageDispatcher : NSObject
@property (nonatomic) @? onMessageDispatch;
@property (nonatomic) @? shouldDispatchMessage;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) NSString firstFetchCursor;
@property (nonatomic) BOOL noMoreHistoryMessage;
@property (nonatomic) <IESLiveIMMessageReciever> nextReceiver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q firstFetchHistoryMessageCount;
- (id)firstFetchCursor;
- (BOOL)noMoreHistoryMessage;
- (id)onMessageDispatch;
- (void)setFirstFetchCursor:;
- (void)setIsAnchor:;
- (void)setNoMoreHistoryMessage:;
- (void)setOnMessageDispatch:;
- (void)setShouldDispatchMessage:;
- (id)shouldDispatchMessage;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
