@interface MAAutoAssetInfoFound : NSObject
@property (nonatomic) MAAutoAssetSelector fullAssetSelector;
@property (nonatomic) NSURL localContentURL;
@property (nonatomic) NSDictionary assetAttributes;
@property (nonatomic) MAAutoAssetStatus currentStatus;
- (id)localContentURL;
- (id)currentStatus;
- (id)initWithCoder:;
- (id)initForSelector:withLocalContentURL:withAssetAttributes:reportingStatus:;
- (id)assetAttributes;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (id)fullAssetSelector;
+ (BOOL)supportsSecureCoding;
@end
