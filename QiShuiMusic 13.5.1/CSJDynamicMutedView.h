@interface CSJDynamicMutedView : CSJDynamicAbstractView
@property (nonatomic) BOOL muted;
@property (nonatomic) CSJDynamicImageViewDecorator imageViewDecorator;
- (id)imageViewDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)setImageViewDecorator:;
- (void)updateWithDarkMode:;
- (void)viewAction:;
- (BOOL)muted;
- (void)setMuted:;
- (void).cxx_destruct;
- (void)render;
+ (id)sizeForContent:brickType:style:lineFeed:lineLimit:lineCount:;
@end
