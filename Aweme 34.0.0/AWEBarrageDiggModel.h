@interface AWEBarrageDiggModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
