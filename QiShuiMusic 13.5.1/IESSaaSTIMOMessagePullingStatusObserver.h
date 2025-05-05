@interface IESSaaSTIMOMessagePullingStatusObserver : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSInteger inbox;
@property (nonatomic) <IESSaaSTIMOMessagePullingStatusObserverDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initForInbox:;
- (void)pullerSimpleStatusDidChangeTo:forInbox:;
- (void)setStatus:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)status;
- (int)inbox;
- (void)setInbox:;
@end
