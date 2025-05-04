@interface AWEUserBlockResponseModel : AWEBaseApiModel
@property (nonatomic) q blockStatus;
- (long long)blockStatus;
- (void)setBlockStatus:;
+ (id)blockStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
