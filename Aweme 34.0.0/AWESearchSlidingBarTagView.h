@interface AWESearchSlidingBarTagView : UIView
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) q showCount;
@property (nonatomic) q buttonIndex;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) AWEGeneralSearchActivityTagModel tagModel;
- (id)tagImageView;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setTagImageView:;
- (void)setTagModel:;
- (id)tagModel;
- (void)hideAt:;
- (BOOL)barTagCanShow:;
- (id)barTagSizeWithModel:;
- (void)showOn:activityTagModel:showCount:;
- (BOOL)isShowing;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setButtonIndex:;
- (long long)buttonIndex;
- (void)setShowCount:;
- (long long)showCount;
- (void)setIsShowing:;
@end
