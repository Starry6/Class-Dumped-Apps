@interface CBALSService : CBHIDService
@property (nonatomic) BOOL validData;
@property (nonatomic) double lux;
@property (nonatomic) BOOL colorSupport;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double CCT;
@property (nonatomic) Q location;
- (void)setEvent:;
- (void)dealloc;
- (double)y;
- (double)x;
- (unsigned long long)location;
- (id)description;
- (double)lux;
- (id)initWithHIDALSServiceClient:;
- (void)resetEventData;
- (id)copyDataInDictionary;
- (BOOL)updateEventData;
- (BOOL)validData;
- (BOOL)colorSupport;
- (double)CCT;
@end
