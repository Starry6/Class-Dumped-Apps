@interface AWEIMWidgetInfoConsecutiveChatInfoModel : AWEBaseApiModel
@property (nonatomic) Q consecutiveState;
@property (nonatomic) q consecutiveCount;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL isPrelevel;
- (id)iconUrl;
- (void)setIconUrl:;
- (long long)consecutiveCount;
- (unsigned long long)consecutiveState;
- (void)setConsecutiveState:;
- (void)setConsecutiveCount:;
- (BOOL)isPrelevel;
- (void)setIsPrelevel:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
