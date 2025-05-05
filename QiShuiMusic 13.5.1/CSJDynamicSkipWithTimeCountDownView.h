@interface CSJDynamicSkipWithTimeCountDownView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (void)adjust_buDynamic_frameIfNeed;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (void)skipControlStatusUpdateFrameWithDuration:stopped:;
- (void)updateSubViewFrameWithSkipViewShow:;
- (void)updateWithDarkMode:;
- (void)videoStateUpdateWithPlayDuration:stopped:;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
