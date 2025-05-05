@interface CSJRenderMainProvider : NSObject
@property (nonatomic) CSJRenderEngineConfig config;
@property (nonatomic) CSJTemplateV1Cache v1Cache;
@property (nonatomic) CSJTemplateV3Cache v3Cache;
@property (nonatomic) CSJTemplateInteractionCache interactionCache;
- (id)v1Cache;
- (id)v3Cache;
- (void)customDoSomethingWithPackageModel:dcChanged:templateUrl:;
- (void)downloadTemplateWithDCChanged:successBlock:;
- (id)engineURLAddress;
- (void)fetchTemplateWithDCChanged:;
- (id)interactionCache;
- (void)readLocalData;
- (void)setInteractionCache:;
- (void)setV1Cache:;
- (void)setV3Cache:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
- (void)deleteLocalData;
@end
