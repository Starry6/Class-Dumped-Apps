@interface CSJDynamicIconView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicImageViewDecorator imageViewDecorator;
- (void)adjust_buDynamic_frameIfNeed;
- (id)imageViewDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)setImageViewDecorator:;
- (void).cxx_destruct;
- (void)render;
+ (id)sizeForContent:brickType:style:lineFeed:lineLimit:lineCount:;
@end
