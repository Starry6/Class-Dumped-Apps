@interface AWESearchSugIconTextModel : AWEBaseApiModel
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString content;
@property (nonatomic) q contentSize;
@property (nonatomic) q corner;
- (void)setContentSize:;
- (id)content;
- (long long)contentSize;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setContent:;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)textColor;
- (long long)corner;
- (void)setCorner:;
+ (id)JSONKeyPathsByPropertyKey;
@end
