@interface IESECMallLivePlayer : UIView
@property (nonatomic) IESECStoreLivePlayer storePlayerView;
@property (nonatomic) IESECLivePlayer ecPlayerView;
@property (nonatomic) Q playState;
@property (nonatomic) UIView livePlayerView;
@property (nonatomic) <IESECStoreLivePlayerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loadStorePlayer;
- (id)storePlayerView;
- (id)ecPlayerView;
- (id)livePlayerView;
- (id)loadEcomPlayer;
- (void)player:didReceiveError:;
- (void)player:loadStateDidChange:;
- (void)setEcPlayerView:;
- (void)setStorePlayerView:;
- (void)setDelegate:;
- (void)setMuted:;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)playState;
- (void)setPlayState:;
@end
