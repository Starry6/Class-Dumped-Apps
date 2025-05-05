@interface MAAutoAssetInfoStaging : NSObject
@property (nonatomic) NSDictionary allAvailableForStagingAttributes;
@property (nonatomic) Q totalExpectedBytes;
- (unsigned long long)totalExpectedBytes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAvailableForStaging:withTotalExpectedBytes:;
- (id)allAvailableForStagingAttributes;
+ (BOOL)supportsSecureCoding;
@end
