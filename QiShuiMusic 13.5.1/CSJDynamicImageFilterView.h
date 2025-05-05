@interface CSJDynamicImageFilterView : CSJDynamicImageView
@property (nonatomic) CSJDynamicFilterSlideDecorator slideDecorator;
@property (nonatomic) CSJDynamicFilterFlipDecorator flipDecorator;
- (id)flipDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)setFlipDecorator:;
- (void)setSlideDecorator:;
- (id)slideDecorator;
- (void).cxx_destruct;
@end
