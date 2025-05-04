@interface AWEIMUserByteSyncModel : AWEBaseApiModel
@property (nonatomic) NSString bizType;
@property (nonatomic) q serverTimestamp;
@property (nonatomic) NSString data;
- (id)bizType;
- (void)setBizType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (long long)serverTimestamp;
- (void)setServerTimestamp:;
+ (id)JSONKeyPathsByPropertyKey;
@end
