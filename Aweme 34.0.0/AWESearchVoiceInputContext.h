@interface AWESearchVoiceInputContext : NSObject
@property (nonatomic) q inputTimeoutRemind;
@property (nonatomic) q inputTimeout;
@property (nonatomic) NSString appkey;
@property (nonatomic) NSDictionary asrExtra;
- (id)appkey;
- (void)setAppkey:;
- (void)setInputTimeout:;
- (void)setInputTimeoutRemind:;
- (void)setAsrExtra:;
- (long long)inputTimeoutRemind;
- (long long)inputTimeout;
- (id)asrExtra;
- (void).cxx_destruct;
@end
