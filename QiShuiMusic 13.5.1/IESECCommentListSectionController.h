@interface IESECCommentListSectionController : IESECCommentSectionController
@property (nonatomic) IESECCommentListKitCommentsModel model;
@property (nonatomic) IESECCommentListSectionLayout sectionLayout;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (void)showCommentGuestWindowViewWithDetailModel:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
