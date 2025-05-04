@interface AWEHotSearchCommentExtendDiscussionSectionViewModel : AWECommonFeedBaseSectionViewModel
- (id)referString;
- (void)configCellModels;
- (id)getDetailSchema:index:;
- (void)trackCellClickWithCellModel:extra:;
- (void)trackCellShowWithCellModel:extra:;
- (id)innerCardModel;
- (void)p_addTrackParams:cellModel:;
@end
