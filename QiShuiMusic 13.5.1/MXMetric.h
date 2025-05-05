@interface MXMetric : NSObject
@property (nonatomic) NSMeasurementFormatter measurementFormatter;
- (id)JSONRepresentation;
- (id)init;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)measurementFormatter;
- (void)setMeasurementFormatter:;
- (id)DictionaryRepresentation;
+ (BOOL)supportsSecureCoding;
@end
