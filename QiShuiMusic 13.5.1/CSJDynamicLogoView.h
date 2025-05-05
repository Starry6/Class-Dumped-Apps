@interface CSJDynamicLogoView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
@property (nonatomic) CSJDynamicImageViewDecorator imageViewDecorator;
- (id)imageViewDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setImageViewDecorator:;
- (void)setLabelDecorator:;
- (id)updateLogoText;
- (void).cxx_destruct;
- (void)render;
+ (id)sizeForContent:brickType:style:lineFeed:lineLimit:lineCount:;
@end
