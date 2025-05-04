@interface AWERecordIMCustomUIComponent : ACCFeatureComponent
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) <ACCRecordSelectMusicService> musicService;
@property (nonatomic) BOOL hasSelectMusic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)musicService;
- (void)setMusicService:;
- (id)imModel;
- (void)shouldItemsShow:animated:;
- (id)displayNameString;
- (void)setHasSelectMusic:;
- (BOOL)hasSelectMusic;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
@end
