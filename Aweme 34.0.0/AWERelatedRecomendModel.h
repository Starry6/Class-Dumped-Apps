@interface AWERelatedRecomendModel : AWEBaseApiModel
@property (nonatomic) BOOL shouldShowRelatedBar;
@property (nonatomic) NSInteger shouldShowRelatedPanel;
@property (nonatomic) NSString relatedBarContent;
@property (nonatomic) AWERelatedRecomendInfoModel infoModel;
- (id)infoModel;
- (void)setInfoModel:;
- (BOOL)shouldShowRelatedBar;
- (void)setShouldShowRelatedBar:;
- (int)shouldShowRelatedPanel;
- (void)setShouldShowRelatedPanel:;
- (id)relatedBarContent;
- (void)setRelatedBarContent:;
- (void).cxx_destruct;
+ (id)infoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
