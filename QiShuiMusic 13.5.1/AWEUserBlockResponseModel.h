@interface AWEUserBlockResponseModel : IESIMBaseApiModel
@property (nonatomic) q blockStatus;
- (void)setBlockStatus:;
- (long long)blockStatus;
+ (id)blockStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
