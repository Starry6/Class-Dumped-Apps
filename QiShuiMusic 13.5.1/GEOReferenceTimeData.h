@interface GEOReferenceTimeData : NSObject
@property (nonatomic) double refTime;
@property (nonatomic) double refError;
@property (nonatomic) double kernTime;
@property (nonatomic) {timeval=qi} kernBootTime;
- (double)refTime;
- (id)initWithCoder:;
- (id)initWithRefTime:refError:kernTime:bootTime:;
- (void)encodeWithCoder:;
- (id)kernBootTime;
- (double)refError;
- (id)description;
- (double)kernTime;
- (double)currentReferenceTime;
+ (BOOL)supportsSecureCoding;
@end
