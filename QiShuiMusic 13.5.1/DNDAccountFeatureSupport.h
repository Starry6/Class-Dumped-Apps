@interface DNDAccountFeatureSupport : NSObject
@property (nonatomic) Q cloudFeatures;
@property (nonatomic) BOOL hasCloudDevices;
@property (nonatomic) Q pairedFeatures;
@property (nonatomic) BOOL hasPairedDevices;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)_initWithCloud:hasCloud:paired:hasPaired:;
- (unsigned long long)cloudFeatures;
- (BOOL)hasCloudDevices;
- (unsigned long long)pairedFeatures;
- (BOOL)hasPairedDevices;
+ (BOOL)supportsSecureCoding;
+ (id)accountFeaturesWithCloud:hasCloudDevices:paired:hasPairedDevices:;
@end
