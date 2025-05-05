@interface CSJDynamicFeedBackDislikeView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicTapGestureDecorator tapGestureDecorator;
@property (nonatomic) CSJDynamicLabelDecorator labelDecorator;
- (void)adjust_buDynamic_frameIfNeed;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)labelDecorator;
- (void)setLabelDecorator:;
- (void)setTapGestureDecorator:;
- (id)tapGestureDecorator;
- (void)updateWithDarkMode:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)render;
+ (id)updateContentForSizeWithOriginContent:;
@end
