@interface AWETeenAfterWatchResponseModel : AWEBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) NSString msg;
@property (nonatomic) NSArray afterWatchArray;
- (id)afterWatchArray;
- (void)setAfterWatchArray:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (void)setMsg:;
- (id)msg;
+ (id)afterWatchArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
