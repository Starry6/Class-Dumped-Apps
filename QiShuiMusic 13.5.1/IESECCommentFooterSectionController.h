@interface IESECCommentFooterSectionController : IESECCommentSectionController
@property (nonatomic) IESECCommentListKitFooterModel model;
@property (nonatomic) IESECCommentFooterSectionLayout sectionLayout;
@property (nonatomic) double bottomViewHeight;
- (double)bottomViewHeight;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setBottomViewHeight:;
- (void)setSectionLayout:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
