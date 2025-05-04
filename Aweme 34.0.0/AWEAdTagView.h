@interface AWEAdTagView : UILabel
- (void)configWithAdLabel:;
- (void)setupLabelInfoWithModel:;
- (void)configWithAdLabel:labelHeight:textHeight:textFont:;
- (id)initWithFrame:;
+ (id)adTagView;
@end
