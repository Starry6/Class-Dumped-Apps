@interface AWELiveLifeGaiaXManager : NSObject
@property (nonatomic) NSString geckoTemplatePath;
@property (nonatomic) NSMutableDictionary geckoTemplateIdExistCache;
@property (nonatomic) NSMutableDictionary localTemplateIdExistCache;
- (void)setupGaiaX;
- (id)geckoPackageVersion;
- (id)localLiveBizId;
- (id)expoundCardTemplateIdWithGeckoVersion:;
- (void)updateExpoundCardTemplateCacheIfNeeded;
- (void)setGeckoTemplateIdExistCache:;
- (void)setLocalTemplateIdExistCache:;
- (id)localBundlePath;
- (id)geckoTemplateIdExistCache;
- (id)geckoTemplatePath;
- (id)localTemplateIdExistCache;
- (id)experimentTemplateIdWithOriginId:;
- (BOOL)templateCacheExistWithTemplateId:geckoVersion:;
- (BOOL)fileExistAtGeckoWithTemplateId:geckoVersion:;
- (BOOL)fileExistAtLocalWithTemplateId:;
- (id)realTemplateIdWithOriginId:geckoVersion:;
- (id)shelfCellTemplateIdWithGeckoVersion:;
- (void)updateShelfCellTemplateCacheIfNeeded;
- (void)setGeckoTemplatePath:;
- (void).cxx_destruct;
+ (id)shareManager;
@end
