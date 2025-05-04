@interface AWEDCFeedBaseSectionController : AWEBaseListSectionController
@property (nonatomic) <AWEDCFeedSectionControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (double)getCellWidth;
- (void)updateLayoutWithHeight:animated:completion:;
- (id)delegate;
- (id)sectionBackgroundColor;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
