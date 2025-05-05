@interface IESLiveUserCardTagView : UIView
@property (nonatomic) IESLiveProfileTagContent profileTagContent;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) IESLiveUserCardStore store;
- (id)attributesWith:;
- (id)initWithProfileTagContent:;
- (id)profileTagContent;
- (void)setProfileTagContent:;
- (void)setStore:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)store;
- (void)setGradientLayer:;
- (void)setupView;
@end
