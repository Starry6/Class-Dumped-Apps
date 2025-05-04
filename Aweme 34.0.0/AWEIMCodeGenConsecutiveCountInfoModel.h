@interface AWEIMCodeGenConsecutiveCountInfoModel : AWEBaseDataModel
@property (nonatomic) q consecutiveCount;
@property (nonatomic) q expireTime;
- (long long)consecutiveCount;
- (void)setConsecutiveCount:;
- (long long)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
