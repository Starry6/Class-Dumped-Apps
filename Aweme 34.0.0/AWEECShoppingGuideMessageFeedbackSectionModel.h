@interface AWEECShoppingGuideMessageFeedbackSectionModel : AWEECShoppingGuideMessageSectionModel
@property (nonatomic) BOOL isClickLike;
@property (nonatomic) BOOL isClickFeedback;
- (void)setIsClickFeedback:;
- (void)setIsClickLike:;
- (BOOL)isClickLike;
- (BOOL)isClickFeedback;
+ (id)JSONKeyPathsByPropertyKey;
@end
