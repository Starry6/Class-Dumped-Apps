@interface IESECBorderedTagStack : UIView
@property (nonatomic) NSArray tagConfigurations;
@property (nonatomic) double spacing;
- (void)setTagConfigurations:;
- (id)tagConfigurations;
- (void)updateTagViews;
- (double)spacing;
- (void)setSpacing:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
