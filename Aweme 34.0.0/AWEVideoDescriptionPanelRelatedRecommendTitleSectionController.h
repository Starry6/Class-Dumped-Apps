@interface AWEVideoDescriptionPanelRelatedRecommendTitleSectionController : AWEBaseListSectionController
@property (nonatomic) AWEVideoDescriptionPanelRelatedRecommendTitleView titleView;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)setReferString:;
- (id)cellIdentifierForModel:index:;
- (double)getTitleSectionHeight;
- (id)titleView;
- (void)setTitleView:;
- (id)init;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
@end
