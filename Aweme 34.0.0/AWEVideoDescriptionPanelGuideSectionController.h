@interface AWEVideoDescriptionPanelGuideSectionController : AWEBaseListSectionController
@property (nonatomic) UIView divider;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)cellIdentifierForModel:index:;
- (double)guideSectionHeight;
- (id)init;
- (id)sectionBackgroundColor;
- (double)bottomMargin;
- (Class)cellClass;
- (void).cxx_destruct;
- (double)topMargin;
- (id)divider;
- (void)setDivider:;
@end
