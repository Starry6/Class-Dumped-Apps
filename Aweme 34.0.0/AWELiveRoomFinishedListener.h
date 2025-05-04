@interface AWELiveRoomFinishedListener : NSObject
@property (nonatomic) <IESLiveCompoundSubscription> actionDisposable;
@property (nonatomic) @? finishBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRoomFinishedBlock:;
- (void)liveDidFinished:;
- (id)actionDisposable;
- (void)setActionDisposable:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setFinishBlock:;
- (id)finishBlock;
@end
