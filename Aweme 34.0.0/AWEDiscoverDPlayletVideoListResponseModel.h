@interface AWEDiscoverDPlayletVideoListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEDiscoverDPlayletSelectionPanelConfigModel selectionPanelConfig;
@property (nonatomic) NSString lynxPanelConfigJSON;
- (id)minCursor;
- (id)awemeModels;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setAwemeModels:;
- (id)lynxPanelConfigJSON;
- (id)selectionPanelConfig;
- (void)setSelectionPanelConfig:;
- (void)setLynxPanelConfigJSON:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeModelsJSONTransformer;
+ (id)selectionPanelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
