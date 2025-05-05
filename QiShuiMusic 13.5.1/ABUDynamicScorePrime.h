@interface ABUDynamicScorePrime : NSObject
@property (nonatomic) q showTime;
@property (nonatomic) q showDuration;
@property (nonatomic) q clickCount;
@property (nonatomic) q dislikeCount;
@property (nonatomic) NSString dateStr;
- (id)dateStr;
- (long long)dislikeCount;
- (void)setDateStr:;
- (void)setDislikeCount:;
- (void)setShowDuration:;
- (void)setShowTime:;
- (long long)showDuration;
- (long long)showTime;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)clickCount;
- (void).cxx_destruct;
- (void)setClickCount:;
+ (BOOL)supportsSecureCoding;
@end
