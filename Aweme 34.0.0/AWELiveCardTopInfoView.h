@interface AWELiveCardTopInfoView : UIView
@property (nonatomic) AWELiveCardTopInfoTagView tagView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWELiveCardTopInfoInsetLabel subTitleLabel;
@property (nonatomic) UILabel subTitleLabelThin;
- (id)createStackView;
- (id)createSubTitleLabel;
- (id)createSubTitleLabelThin;
- (void)setSubTitleLabelThin:;
- (id)subTitleLabelThin;
- (void)updateWithFirstTagTitle:secondTagTitle:tagType:titleLabel:subTitleLabel:subTitleLabelThin:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)createTitleLabel;
- (id)tagView;
- (void)setTagView:;
@end
