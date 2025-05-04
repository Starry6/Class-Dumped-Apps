@interface AWEDitoCommonStripView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIView lineView;
@property (nonatomic) Q lineStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLineStyle:;
- (void)configWithData:;
- (id)indexLineView;
- (id)indexLineConfig;
- (void)stripViewDidSelected;
- (void)stripViewDidDeSelected;
- (void)setLabel:;
- (id)init;
- (id)label;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (unsigned long long)lineStyle;
@end
