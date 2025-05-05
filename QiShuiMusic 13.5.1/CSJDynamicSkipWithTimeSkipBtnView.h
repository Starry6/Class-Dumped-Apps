@interface CSJDynamicSkipWithTimeSkipBtnView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (void)adjust_buDynamic_frameIfNeed;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (id)skipTextSize;
- (void)updateWithDarkMode:;
- (void)videoStateUpdateWithPlayDuration:stopped:;
- (void)viewAction;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
