@interface AWESearchResultDynamicBackgroundManager : AWEGeneralSearchBackgroundManager
@property (nonatomic) AWESearchBackgroundView dynamicBackgroundView;
@property (nonatomic) AWEGeneralSearchBackgroundModel backgroundModel;
- (void)setBackgroundModel:;
- (id)dynamicBackgroundView;
- (id)searchResultDynamicCoverView;
- (id)searchResultDynamicBackgroundView;
- (void)setDynamicBackgroundView:;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)backgroundModel;
@end
