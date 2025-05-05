@interface CMWaterSubmersionMeasurement : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSMeasurement depth;
@property (nonatomic) NSMeasurement pressure;
@property (nonatomic) NSMeasurement surfacePressure;
@property (nonatomic) q submersionState;
- (id)depth;
- (void)dealloc;
- (id)pressure;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithDepth:andPressure:andSurfacePressure:andState:andDate:;
- (id)surfacePressure;
- (long long)submersionState;
+ (BOOL)supportsSecureCoding;
@end
