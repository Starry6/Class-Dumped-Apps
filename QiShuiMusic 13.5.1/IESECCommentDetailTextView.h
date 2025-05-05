@interface IESECCommentDetailTextView : UIView
@property (nonatomic) IESECFoldableTextView foldableTextView;
@property (nonatomic) UILabel skuLabel;
@property (nonatomic) UILabel authorLabel;
@property (nonatomic) Q enterFrom;
@property (nonatomic) <IESECCommentDetailTextViewDelegate> delegate;
- (void)setAuthorLabel:;
- (id)authorLabel;
- (unsigned long long)enterFrom;
- (id)foldableTextView;
- (void)foldingButtonStateChanged:;
- (id)initWithFrame:enterFrom:;
- (void)setEnterFrom:;
- (void)setFoldableTextView:;
- (void)setSkuLabel:;
- (void)setupSubview;
- (id)skuLabel;
- (void)updateViewWithModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
@end
