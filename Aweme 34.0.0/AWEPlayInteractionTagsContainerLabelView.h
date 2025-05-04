@interface AWEPlayInteractionTagsContainerLabelView : UIView
@property (nonatomic) YYLabel nameLabel;
@property (nonatomic) YYLabel infoLabel;
- (void)p_setupUI;
- (void)updateLabelTextWithNickName:labelInfo:isDetailComment:;
- (double)p_handleLengthOfString:withAttributes:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)infoLabel;
- (void)setNameLabel:;
- (void)setInfoLabel:;
@end
