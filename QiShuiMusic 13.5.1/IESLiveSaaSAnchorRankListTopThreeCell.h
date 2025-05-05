@interface IESLiveSaaSAnchorRankListTopThreeCell : UITableViewCell
@property (nonatomic) NSArray topThreeViewArray;
@property (nonatomic) IESLiveSaaSAnchorRankListTopThreeItemView top1View;
@property (nonatomic) IESLiveSaaSAnchorRankListTopThreeItemView top2View;
@property (nonatomic) IESLiveSaaSAnchorRankListTopThreeItemView top3View;
- (void)setTop1View:;
- (void)setTop2View:;
- (void)setTop3View:;
- (void)setTopThreeViewArray:;
- (id)top1View;
- (id)top2View;
- (id)top3View;
- (id)topThreeViewArray;
- (void)updateWithViewModels:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void).cxx_destruct;
+ (double)ratioWithWidth:;
+ (double)heightWithTableViewWidth:;
@end
