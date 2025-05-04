@interface AWEHotSearchCommentDetailView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) YYLabel detailLabelFirst;
@property (nonatomic) YYLabel detailLabelSecond;
@property (nonatomic) AWEHotSearchCommentDetailButton detailButton;
@property (nonatomic) AWEHotSearchCommentDetailPlaceHolderView placeHolderView;
- (void)makeConstraint;
- (void)updateToEmptyPageState:;
- (id)detailLabelFirst;
- (id)detailLabelSecond;
- (void)removePlaceHolderView;
- (void)setDetailLabelFirst:;
- (void)setDetailLabelSecond:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void)setDetailText:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)detailButton;
- (void)setDetailButton:;
- (id)placeHolderView;
- (void)setPlaceHolderView:;
@end
