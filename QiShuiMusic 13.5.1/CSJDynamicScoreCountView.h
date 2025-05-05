@interface CSJDynamicScoreCountView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (void)adjust_buDynamic_frameIfNeed;
- (long long)commitNum;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (void)updateWithDarkMode:;
- (void).cxx_destruct;
- (void)render;
- (id)commitText;
+ (id)updateContentForSizeWithOriginContent:;
@end
