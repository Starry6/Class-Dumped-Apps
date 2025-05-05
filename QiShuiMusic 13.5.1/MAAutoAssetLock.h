@interface MAAutoAssetLock : NSObject
@property (nonatomic) MAAutoAssetSelector fullAssetSelector;
@property (nonatomic) NSURL localContentURL;
@property (nonatomic) NSDictionary assetAttributes;
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval;
@property (nonatomic) NSMutableDictionary lockReasons;
- (id)localContentURL;
- (void)setInhibitedFromEmergencyRemoval:;
- (id)initWithCoder:;
- (id)lockReasons;
- (void)setLockReasons:;
- (id)assetAttributes;
- (void)encodeWithCoder:;
- (id)summary;
- (BOOL)inhibitedFromEmergencyRemoval;
- (id)initForSelector:withLocalContentURL:withAssetAttributes:;
- (void).cxx_destruct;
- (id)description;
- (id)fullAssetSelector;
+ (BOOL)supportsSecureCoding;
@end
