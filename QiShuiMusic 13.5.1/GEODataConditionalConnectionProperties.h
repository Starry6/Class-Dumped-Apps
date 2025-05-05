@interface GEODataConditionalConnectionProperties : NSObject
@property (nonatomic) Q workLoad;
@property (nonatomic) double timeWindowStartTime;
@property (nonatomic) double timeWindowDuration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithWorkload:timeWindowStartTime:timeWindowDuration:;
- (id)initWithWorkload:timeWindowDuration:;
- (unsigned long long)workLoad;
- (double)timeWindowStartTime;
- (double)timeWindowDuration;
+ (BOOL)supportsSecureCoding;
@end
