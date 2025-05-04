@interface AWEVideoHallResponseModel : AWEBaseApiModel
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray blockList;
@property (nonatomic) AWEVideoHallThemeConfig backgroundTheme;
@property (nonatomic) AWELVideoSideBarGuideResponse guideConfig;
- (id)guideConfig;
- (void)setGuideConfig:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)backgroundTheme;
- (void)setBackgroundTheme:;
- (id)blockList;
- (void)setBlockList:;
+ (id)blockListJSONTransformer;
+ (id)backgroundThemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)guideConfigJSONTransformer;
@end
