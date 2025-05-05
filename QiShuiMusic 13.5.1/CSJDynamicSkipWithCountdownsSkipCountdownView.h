@interface CSJDynamicSkipWithCountdownsSkipCountdownView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
@property (nonatomic) BOOL haveChangeSuperViewFrame;
- (BOOL)haveChangeSuperViewFrame;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (BOOL)pbu_changeSuperViewFrame;
- (void)setHaveChangeSuperViewFrame:;
- (void)setLabelDecorator:;
- (void)updateWithDarkMode:;
- (void)videoStateUpdateWithPlayDuration:stopped:;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
