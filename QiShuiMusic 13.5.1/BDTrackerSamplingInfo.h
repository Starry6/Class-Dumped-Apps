@interface BDTrackerSamplingInfo : NSObject
@property (nonatomic) q samplingRate;
@property (nonatomic) q samplingMethod;
@property (nonatomic) NSSet events;
@property (nonatomic) NSDictionary paramKeys;
@property (nonatomic) NSDictionary paramValues;
- (void)setParamValues:;
- (BOOL)containEvent:parameters:;
- (BOOL)hitSamplingWithDid:checksum:;
- (id)paramKeys;
- (id)paramValues;
- (void)setParamKeys:;
- (long long)samplingRate;
- (void)setSamplingRate:;
- (id)initWithDictionary:;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (long long)samplingMethod;
- (void)setSamplingMethod:;
@end
