@interface AWEIMConsecutiveChatAnimationModel : AWEBaseApiModel
@property (nonatomic) q displayInterval;
@property (nonatomic) NSArray displayDays;
@property (nonatomic) BOOL displayWhenActive;
@property (nonatomic) BOOL displayLimitSameDay;
- (void)setDisplayInterval:;
- (id)displayDays;
- (void)setDisplayDays:;
- (BOOL)displayWhenActive;
- (void)setDisplayWhenActive:;
- (BOOL)displayLimitSameDay;
- (void)setDisplayLimitSameDay:;
- (void).cxx_destruct;
- (long long)displayInterval;
+ (id)JSONKeyPathsByPropertyKey;
@end
