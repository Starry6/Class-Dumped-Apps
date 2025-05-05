@interface PHTextFeature : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString string;
@property (nonatomic) float weight;
@property (nonatomic) Q origin;
- (id)string;
- (id)encodedData;
- (void)setOrigin:;
- (float)weight;
- (void)setString:;
- (void)setType:;
- (void)setWeight:;
- (id)initWithCoder:;
- (unsigned long long)origin;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:string:weight:origin:;
+ (BOOL)supportsSecureCoding;
+ (id)stringForType:;
+ (id)textFeatureWithType:string:weight:origin:;
+ (id)textFeatureWithData:;
+ (id)stringForOrigin:;
+ (id)fetchTextFeaturesByAssetLocalIdentifierForAssets:;
+ (id)_textFeaturesByMomentLocalIdentifierForMomentLocalIdentifiers:inPhotoLibrary:;
+ (id)_momentLocalIdentifierByAssetLocalIdentifiersForAssets:;
@end
