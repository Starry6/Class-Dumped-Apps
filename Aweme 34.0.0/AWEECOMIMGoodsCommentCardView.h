@interface AWEECOMIMGoodsCommentCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardGoodsCommentContentView commentContentView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel buttonsView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowBottomMoreItemView;
- (void)tapCard;
- (id)commentContentView;
- (void)goodsCommentViewDidClickShowFullText:;
- (void)setCommentContentView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)updateWithData:;
- (void)setHeaderView:;
- (void)setButtonsView:;
- (id)buttonsView;
- (void)updateData;
+ (double)heightWithWidth:model:;
@end
