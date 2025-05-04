@interface AWERecordSelectMusicBindServiceImpl : NSObject
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) ACCRecordSelectMusicServiceImpl selectMusicViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRepository:serviceProvider:;
- (void)bindSelectMusicViewModel:;
- (void)bindAllService;
- (void)bindResourceLoadedService;
- (void)bindPropService;
- (void)bindMVSelectService;
- (void)setSelectMusicViewModel:;
- (void)addMusicShootSameMusicResourceApplyTrackNode;
- (id)selectMusicViewModel;
- (void)trackMusicShootSameMusicDidApplyIfNeed;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
- (id)serviceProvider;
- (void)setServiceProvider:;
@end
