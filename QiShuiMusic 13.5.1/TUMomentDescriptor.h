@interface TUMomentDescriptor : NSObject
@property (nonatomic) NSURL photoViewingAppURL;
@property (nonatomic) NSString photosAssetIdentifier;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)photosAssetIdentifier;
- (id)initWithPhotosAppAssetIdentifier:;
- (id)photoViewingAppURL;
+ (BOOL)supportsSecureCoding;
@end
