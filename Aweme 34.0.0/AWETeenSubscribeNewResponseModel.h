@interface AWETeenSubscribeNewResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasNew;
@property (nonatomic) Q count;
- (BOOL)hasNew;
- (void)setHasNew:;
- (void)setCount:;
- (unsigned long long)count;
+ (id)hasNewJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
