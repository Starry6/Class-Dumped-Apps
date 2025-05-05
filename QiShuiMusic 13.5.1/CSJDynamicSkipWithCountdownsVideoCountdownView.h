@interface CSJDynamicSkipWithCountdownsVideoCountdownView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (void)updateWithDarkMode:;
- (void)videoStateUpdateWithPlayDuration:stopped:;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
