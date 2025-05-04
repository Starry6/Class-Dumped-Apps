@interface AWEDetailTrendEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl
@property (nonatomic) AWEDetailTrendViewModel stateContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)enterAwemeDetailWithIndexPath:awemeModel:;
- (id)initWithHost:stateContext:;
- (long long)transferIndexFromPanelToInner:;
- (id)schemaRequestActivityMobMapParams;
- (id)schemaRequestExtraInfoParams;
- (BOOL)isValidTemplateVideoWithDefinition:duration:;
- (id)generateTemplateVideoInfoData:;
- (void)setHost:;
- (id)host;
- (void)setStateContext:;
- (void).cxx_destruct;
- (id)stateContext;
@end
