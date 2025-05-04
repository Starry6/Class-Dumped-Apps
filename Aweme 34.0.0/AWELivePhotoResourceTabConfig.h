@interface AWELivePhotoResourceTabConfig : MTLModel
@property (nonatomic) BOOL useCache;
@property (nonatomic) Q disableCacheDefaultMode;
@property (nonatomic) Q emptyCacheDefaultMode;
@property (nonatomic) Q multiAssetsDefaultMode;
@property (nonatomic) Q willingToShowMode;
@property (nonatomic) BOOL videoFormatInAIClip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)videoFormatInAIClip;
- (void)makeDecisionWithMemory:multiAssets:;
- (unsigned long long)multiAssetsDefaultMode;
- (unsigned long long)emptyCacheDefaultMode;
- (unsigned long long)disableCacheDefaultMode;
- (void)setDisableCacheDefaultMode:;
- (void)setEmptyCacheDefaultMode:;
- (void)setMultiAssetsDefaultMode:;
- (unsigned long long)willingToShowMode;
- (void)setUseCache:;
- (BOOL)useCache;
+ (id)JSONKeyPathsByPropertyKey;
@end
