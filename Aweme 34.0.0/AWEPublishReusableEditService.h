@interface AWEPublishReusableEditService : NSObject
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) NLEInterface_OC nle;
@property (nonatomic) ACCThreadSafeArray useScenes;
@property (nonatomic) ACCRepositoryWorkspace copiedWorkspace;
@property (nonatomic) q index;
- (id)nle;
- (id)editService;
- (id)useScenes;
- (id)copiedWorkspace;
- (id)initWithNle:editService:;
- (void)setUseScenes:;
- (void)setCopiedWorkspace:;
- (void)setIndex:;
- (long long)index;
- (id)description;
- (void).cxx_destruct;
@end
