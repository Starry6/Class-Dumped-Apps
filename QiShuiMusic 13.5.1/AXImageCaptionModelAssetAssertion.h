@interface AXImageCaptionModelAssetAssertion : NSObject
@property (nonatomic) Q assertionType;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSNumber minimumCompatibilityVersion;
@property (nonatomic) NSNumber maximumCompatibilityVersion;
@property (nonatomic) NSString modelVersion;
@property (nonatomic) NSString modelLanguage;
@property (nonatomic) NSString modelStage;
@property (nonatomic) NSString assetType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)assetType;
- (id)modelVersion;
- (void)setModelVersion:;
- (id)propertyListRepresentation;
- (id)minimumCompatibilityVersion;
- (void).cxx_destruct;
- (id)maximumCompatibilityVersion;
- (unsigned long long)assertionType;
- (void)setClientIdentifier:;
- (id)description;
- (id)clientIdentifier;
- (void)setAssertionType:;
- (void)setMinimumCompatibilityVersion:;
- (void)setMaximumCompatibilityVersion:;
- (id)modelLanguage;
- (void)setModelLanguage:;
- (id)modelStage;
- (void)setModelStage:;
+ (void)partitionAssertionsWithPropertyListRepresentations:intoVersionLockedAssertions:upgradableAssertions:;
+ (id)assertionsWithPropertyListRepresentations:;
+ (id)assertionWithPropertyListRepresentation:error:;
@end
