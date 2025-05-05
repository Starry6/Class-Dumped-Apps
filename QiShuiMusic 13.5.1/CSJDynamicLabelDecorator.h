@interface CSJDynamicLabelDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) UILabel label;
- (void)sizeToFitIfNeed;
- (id)init;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)render;
- (void)updateTheme;
@end
