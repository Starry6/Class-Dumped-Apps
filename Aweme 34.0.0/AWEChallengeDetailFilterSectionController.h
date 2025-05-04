@interface AWEChallengeDetailFilterSectionController : AWEBaseListSectionController
@property (nonatomic) double sectionHeight;
@property (nonatomic) AWEChallengeDetailFilterCell staticFilterCell;
@property (nonatomic) <AWEChallengeDetailFilterSectionControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)updateContentAlpha:;
- (void)didChangeSortType:;
- (void)setStaticFilterCell:;
- (id)staticFilterCell;
- (id)delegate;
- (id)sectionBackgroundColor;
- (BOOL)showSeparator;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)sectionHeight;
- (void)setSectionHeight:;
@end
