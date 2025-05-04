@interface AWERecommendFeedbackInfo : AWEBaseApiModel
@property (nonatomic) BOOL show;
@property (nonatomic) NSString title;
@property (nonatomic) NSString positText;
@property (nonatomic) NSString negText;
@property (nonatomic) BOOL swap;
- (id)positText;
- (void)setPositText:;
- (id)negText;
- (void)setNegText:;
- (void)setSwap:;
- (BOOL)show;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)swap;
- (void)setShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
