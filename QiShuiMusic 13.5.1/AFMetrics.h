@interface AFMetrics : NSObject
@property (nonatomic) NSString originalCommandId;
@property (nonatomic) q category;
@property (nonatomic) NSDictionary eventInfo;
@property (nonatomic) NSNumber duration;
- (id)initWithCoder:;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)description;
- (id)duration;
- (long long)category;
- (id)initWithOriginalCommandId:category:duration:;
- (id)initWithOriginalCommandId:category:eventInfo:duration:;
- (id)aceMetrics;
- (double)_roundDouble:toSignificantDigits:;
- (id)categoryString;
- (id)originalCommandId;
- (void)setOriginalCommandId:;
- (id)eventInfo;
- (void)setEventInfo:;
+ (BOOL)supportsSecureCoding;
@end
