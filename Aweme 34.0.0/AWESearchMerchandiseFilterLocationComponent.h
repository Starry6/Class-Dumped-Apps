@interface AWESearchMerchandiseFilterLocationComponent : AWESearchMerchandiseFilterBaseComponent
@property (nonatomic) AWESearchMerchandiseFilterBaseItem locationButton;
@property (nonatomic) DUXLoadingCircleView loadingView;
@property (nonatomic) UIButton relocationButton;
@property (nonatomic) Q state;
@property (nonatomic) AWELocationServicePersistModel locationModel;
@property (nonatomic) @? showTrackBlock;
@property (nonatomic) @? clickTrackBlock;
- (id)locationModel;
- (void)setLocationModel:;
- (id)clickTrackBlock;
- (void)setClickTrackBlock:;
- (void)setupAction;
- (void)autoLocation;
- (id)locationButton;
- (id)relocationButton;
- (void)locationAction;
- (void)relocationAction;
- (void)updateBusinessInfoWithLocationModel:;
- (void)goSettingAlertShow;
- (id)showTrackBlock;
- (void)setShowTrackBlock:;
- (void)setLocationButton:;
- (void)setRelocationButton:;
- (void)setModel:;
- (void)setIsSelected:;
- (void)setManager:;
- (void)setLoadingView:;
- (void)requestLocation;
- (id)initWithFrame:;
- (id)loadingView;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)setState:;
- (void)refreshState;
- (void)setupUI;
@end
