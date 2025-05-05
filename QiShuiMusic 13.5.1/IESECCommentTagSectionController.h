@interface IESECCommentTagSectionController : IESECCommentSectionController
@property (nonatomic) IESECCommentListKitStatsModel model;
@property (nonatomic) IESECCommentTagSectionLayout sectionLayout;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (void)setupAllCommentSectionSelectedTagID:;
- (void)setupAllCommentSectionSelectedTagID:isImpressionTag:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
