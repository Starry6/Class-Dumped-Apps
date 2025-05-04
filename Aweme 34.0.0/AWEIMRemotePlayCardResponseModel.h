@interface AWEIMRemotePlayCardResponseModel : AWEBaseApiModel
@property (nonatomic) NSString messageID;
@property (nonatomic) BOOL isLive;
@property (nonatomic) q linkDays;
@property (nonatomic) q linkInterval;
- (long long)linkDays;
- (void)setLinkDays:;
- (long long)linkInterval;
- (void)setLinkInterval:;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
- (BOOL)isLive;
- (void)setIsLive:;
+ (id)JSONKeyPathsByPropertyKey;
@end
