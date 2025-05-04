@interface AWETemplateSearchViewModel : AWETemplateBaseViewModel
@property (nonatomic) AWESearchAnchorListModel anchorModel;
@property (nonatomic) NSArray searchAnchorWordsModel;
- (void)setAnchorModel:;
- (id)anchorModel;
- (id)clientEngineExtraForAweme:;
- (id)initWithData:scene:context:;
- (id)paramsForTemplateViewTransfer;
- (void)viewDidTriggerActionWithSearchAnchorModel:;
- (id)enterFromValueForTrack;
- (id)enterFromSecondValueForTrack;
- (id)generateSchemaWithSearchAnchorModel:;
- (id)initWithData:context:scene:extraInfo:;
- (id)paramsForTemplateViewShow;
- (id)paramsForTemplateViewClick;
- (void)setSearchAnchorWordsModel:;
- (void)viewTransfer:;
- (id)generateURLStringWith:;
- (id)searchAnchorWordsModel;
- (id)getTextContentWithType:;
- (void).cxx_destruct;
+ (BOOL)shouldActiveWithData:scene:context:;
+ (BOOL)shouldActiveWithData:context:scene:extraInfo:;
+ (void)trackShowFailure:context:;
+ (id)enterFromValueForTrackWithReferString:withExtraInfo:;
+ (BOOL)isNearbyDoubleColInnerWithExtraInfo:;
+ (id)enterFromSecondValueForTrackWithReferString:withExtraInfo:;
@end
