@interface AWEBarrageGoldLikeModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSString text;
- (id)user;
- (void)setUser:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
