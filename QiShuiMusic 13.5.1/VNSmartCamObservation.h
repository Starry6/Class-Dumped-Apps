@interface VNSmartCamObservation : VNObservation
@property (nonatomic) NSArray smartCamprints;
@property (nonatomic) NSString smartCamprintVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)initWithRequestRevision:smartCamprints:;
- (id)initWithOriginatingRequestSpecifier:smartCamprints:;
- (id)smartCamprints;
- (void)setSmartCamprints:;
- (id)smartCamprintVersion;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (id)observationWithSmartCamprints:;
+ (id)smartCamprintCurrentVersion;
@end
