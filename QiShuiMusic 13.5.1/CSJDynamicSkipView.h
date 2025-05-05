@interface CSJDynamicSkipView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (void)updateWithDarkMode:;
- (void)viewAction;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
