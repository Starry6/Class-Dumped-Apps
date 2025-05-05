@interface IESLiveMultiTabPuzzleLifeProxyer : NSObject
@property (nonatomic) <IESMultiTabHybridViewLifecycleProtocol> delegate;
@property (nonatomic) IESLiveMultiTabModel tabModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (void)setTabModel:;
- (id)tabModel;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidStartLoading;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
