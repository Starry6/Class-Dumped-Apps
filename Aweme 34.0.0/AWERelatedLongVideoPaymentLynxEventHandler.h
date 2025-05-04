@interface AWERelatedLongVideoPaymentLynxEventHandler : NSObject
@property (nonatomic) NSMutableArray subscribeList;
@property (nonatomic) <AWERelatedLongVideoPaymentLynxEventHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscribeList;
- (void)setSubscribeList:;
- (void)registerSubscribes;
- (void)unregisterSubscribers;
- (void)registerLongVideoPaymentStatusChange;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
