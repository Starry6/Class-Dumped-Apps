@interface AWEAIMattingStickerComponent : ACCFeatureComponent
@property (nonatomic) AWEAIMattingStickerHandler AIMattingStickerHandler;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCStickerServiceProtocol> stickerService;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)setEditService:;
- (id)stickerService;
- (void)bindServices:;
- (void)setStickerService:;
- (id)AIMattingStickerHandler;
- (void)setAIMattingStickerHandler:;
- (void).cxx_destruct;
@end
