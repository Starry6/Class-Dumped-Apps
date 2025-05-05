@interface IESECCommentImpressionSectionController : IESECCommentSectionController
@property (nonatomic) IESECCommentListKitTagsModel model;
@property (nonatomic) IESECCommentImpressionSectionLayout sectionLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (double)currentSectionHeight;
- (long long)currentStickyRow;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (BOOL)shouldSticky;
- (BOOL)stickyIndex:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
