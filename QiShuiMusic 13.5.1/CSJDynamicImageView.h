@interface CSJDynamicImageView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicImageViewDecorator imageViewDecorator;
@property (nonatomic) BOOL haveAddGaosi;
- (id)realContentView;
- (BOOL)haveAddGaosi;
- (id)imageViewDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)p_updateImage;
- (void)setHaveAddGaosi:;
- (void)setImageViewDecorator:;
- (void)updateGaosiMohuIfNeed;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)render;
@end
