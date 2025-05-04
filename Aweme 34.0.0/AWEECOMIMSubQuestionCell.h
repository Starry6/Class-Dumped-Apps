@interface AWEECOMIMSubQuestionCell : UITableViewCell
@property (nonatomic) YYLabel quesitonLabel;
@property (nonatomic) UIImageView arrowImgView;
@property (nonatomic) BDPCDDynamicCardDashedLineView dashedLineView;
- (id)arrowImgView;
- (void)setArrowImgView:;
- (id)dashedLineView;
- (void)setDashedLineView:;
- (id)quesitonLabel;
- (void)bindQuestionText:isLastRow:;
- (void)setQuesitonLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
@end
