@interface ASDAppMetricsEvent : NSObject
@property (nonatomic) q eventSubtype;
@property (nonatomic) NSNumber eventTime;
@property (nonatomic) q eventType;
@property (nonatomic) BOOL posted;
@property (nonatomic) NSDictionary payload;
- (void)setEventTime:;
- (id)payload;
- (void)setPayload:;
- (long long)eventType;
- (void)setEventType:;
- (id)initWithCoder:;
- (id)eventTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)eventSubtype;
- (void)setEventSubtype:;
- (BOOL)isPosted;
- (void)setPosted:;
+ (BOOL)supportsSecureCoding;
@end
