@interface IESECLiveRoomButton : UIButton
@property (nonatomic) BOOL isFading;
@property (nonatomic) IESECLiveStateBannerView introducingView;
@property (nonatomic) IESECLiveReplayDataStore dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)introducingView;
- (void)containerViewDidAppear:;
- (void)dataStoreChanged;
- (void)fadeAnimation;
- (BOOL)isFading;
- (void)setIntroducingView:;
- (void)setIsFading:;
- (void)setDataStore:;
- (id)dataStore;
- (id)initWithDataStore:;
- (void).cxx_destruct;
@end
