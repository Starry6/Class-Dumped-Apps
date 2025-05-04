@interface AWEPostPageMusicBeatsService : NSObject
@property (nonatomic) ACCBeatSequenceGenerator beatsGenerator;
@property (nonatomic) BOOL isMusicBeatOn;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) <ACCSequenceEditServiceProtocol> editService;
@property (nonatomic) <AWEPostPageServiceCoordinator> serviceCoordinator;
- (BOOL)isMusicBeatOn;
- (void)setIsMusicBeatOn:;
- (id)editService;
- (void)setEditService:;
- (id)serviceCoordinator;
- (void)setServiceCoordinator:;
- (BOOL)isDefaultAutoBeats;
- (id)beatsGenerator;
- (void)refreshBeatsWithMusic:showResultToast:;
- (void)musicBeatsdidFetchBeats:;
- (id)initWithContext:serviceCoordinator:;
- (void)initBeats;
- (void)setBeatsGenerator:;
- (long long)itemCount;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
