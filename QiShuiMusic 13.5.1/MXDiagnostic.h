@interface MXDiagnostic : NSObject
@property (nonatomic) NSMeasurementFormatter measurementFormatter;
@property (nonatomic) MXMetaData metaData;
@property (nonatomic) NSString applicationVersion;
- (id)JSONRepresentation;
- (void)setMetaData:;
- (id)toDictionary;
- (id)initWithCoder:;
- (id)metaData;
- (void)encodeWithCoder:;
- (id)applicationVersion;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)measurementFormatter;
- (void)setMeasurementFormatter:;
- (id)initWithMetaData:applicationVersion:;
+ (BOOL)supportsSecureCoding;
@end
