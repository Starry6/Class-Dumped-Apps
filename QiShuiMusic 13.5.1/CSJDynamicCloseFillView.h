@interface CSJDynamicCloseFillView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (void)adjust_buDynamic_frameIfNeed;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (void)updateWithDarkMode:;
- (void)webview_closeViewAction;
- (void).cxx_destruct;
- (void)render;
@end
