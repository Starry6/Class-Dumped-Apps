@interface AWETemplateSeparatorView : UIView
@property (nonatomic) AWEBarSeparatorTextModel currentModel;
@property (nonatomic) UIView separatorDot;
@property (nonatomic) UILabel separatorLabel;
- (void)configSubviews;
- (void)addSubViews;
- (void)layoutSubview;
- (id)separatorDot;
- (id)separatorLabel;
- (void)setSeparatorDot:;
- (void)setSeparatorLabel:;
- (id)initWithData:;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithData:;
- (id)currentModel;
- (void)setCurrentModel:;
@end
