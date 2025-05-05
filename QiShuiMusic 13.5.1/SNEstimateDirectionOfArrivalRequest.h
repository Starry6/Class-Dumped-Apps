@interface SNEstimateDirectionOfArrivalRequest : NSObject
@property (nonatomic) NSArray spatialSpectrum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)spatialSpectrum;
- (id)createAnalyzerWithError:;
- (id)initWithTuningPrefix:;
+ (BOOL)supportsSecureCoding;
@end
