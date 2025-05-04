@interface AWEIMMessageBaseHeaderView : UITableViewHeaderFooterView
@property (nonatomic) YYLabel timeLabel;
@property (nonatomic) UIView timeLabelBgView;
@property (nonatomic) double labelWidth;
@property (nonatomic) AWEIMMessageViewModel animatingCellVM;
@property (nonatomic) NSString belongingToConversationID;
- (void)chatBackgroundDidChangeNty:;
- (void)configWithText:chatHasBackground:;
- (id)timeLabelBgView;
- (id)animatingCellVM;
- (id)belongingToConversationID;
- (void)p_adaptNoticeLabelV2:hasChatBg:;
- (void)adaptNoticeLabel:hasChatBg:;
- (double)labelWidthWithText:;
- (void)setAnimatingCellVM:;
- (void)setBelongingToConversationID:;
- (void)setTimeLabelBgView:;
- (void)dealloc;
- (void)setTimeLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (id)initWithReuseIdentifier:;
- (void)layoutSubviews;
- (double)labelWidth;
- (void)setLabelWidth:;
+ (double)timeLabelMarginTop;
+ (id)identifier;
@end
