@interface CSJDynamicArrowButtonView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicImageViewDecorator imageViewDecorator;
- (id)imageViewDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)setImageViewDecorator:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)render;
+ (id)sizeForContent:brickType:style:lineFeed:lineLimit:lineCount:;
@end
