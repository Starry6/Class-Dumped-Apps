@interface AWEShowPlayletVideoListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEShowPlayletSelectionPanelConfigModel selectionPanelConfig;
- (id)minCursor;
- (id)awemeModels;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setAwemeModels:;
- (id)selectionPanelConfig;
- (void)setSelectionPanelConfig:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeModelsJSONTransformer;
+ (id)selectionPanelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
