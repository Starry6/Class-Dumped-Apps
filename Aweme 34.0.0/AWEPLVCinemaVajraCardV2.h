@interface AWEPLVCinemaVajraCardV2 : UICollectionViewCell
@property (nonatomic) UILabel topicLabel;
@property (nonatomic) UIImageView topicIcon;
@property (nonatomic) q cardType;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)duxGrid_superViewDidChangeBreakPointFrom:toBreakPoint:;
- (id)topicLabel;
- (void)setTopicLabel:;
- (void)updateViewForBreakPoint:;
- (id)topicIcon;
- (void)setTopicIcon:;
- (id)initWithFrame:;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)setupView;
- (long long)cardType;
- (void)setCardType:;
@end
