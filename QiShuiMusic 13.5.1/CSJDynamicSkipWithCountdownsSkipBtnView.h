@interface CSJDynamicSkipWithCountdownsSkipBtnView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
@property (nonatomic) BOOL haveChangeSuperViewFrame;
- (void)adjust_buDynamic_frameIfNeed;
- (BOOL)haveChangeSuperViewFrame;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (BOOL)pbu_changeSuperViewFrame;
- (void)setHaveChangeSuperViewFrame:;
- (void)setLabelDecorator:;
- (void)updateWithDarkMode:;
- (void)videoStateUpdateWithPlayDuration:stopped:;
- (void)viewAction;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
