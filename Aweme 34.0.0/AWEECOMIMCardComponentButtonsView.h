@interface AWEECOMIMCardComponentButtonsView : UIView
@property (nonatomic) UIView lineView;
@property (nonatomic) NSArray buttonViewArr;
@property (nonatomic) double clickInterval;
- (void)didButtonClick:;
- (void)setButtonViewArr:;
- (id)buttonViewArr;
- (void)updateWithData:width:;
- (double)clickInterval;
- (void)setClickInterval:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
+ (double)heightWithData:;
@end
