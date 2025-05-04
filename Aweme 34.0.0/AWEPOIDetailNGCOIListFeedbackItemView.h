@interface AWEPOIDetailNGCOIListFeedbackItemView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) AWEPOICOIItemFeedbackModel model;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)setModel:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (id)model;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)tap;
@end
