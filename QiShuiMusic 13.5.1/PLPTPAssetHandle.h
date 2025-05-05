@interface PLPTPAssetHandle : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSManagedObjectID assetID;
@property (nonatomic) NSManagedObjectID sidecarID;
@property (nonatomic) BOOL requiresConversion;
@property (nonatomic) NSString auxiliaryResourceFilenameMarker;
@property (nonatomic) NSSet siblingAssetHandleTypes;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)assetID;
- (BOOL)isEqual:;
- (BOOL)requiresConversion;
- (id)initWithType:assetID:sidecarID:requiresConversion:;
- (id)initWithType:assetID:sidecarID:requiresConversion:siblingAssetHandleTypes:;
- (id)assetHandleBySettingRequiresConversion;
- (id)assetHandleBySettingSiblingAssetHandleTypes:;
- (BOOL)hasSiblingAssetWithAssetHandleType:;
- (id)auxiliaryResourceFilenameMarker;
- (id)sidecarID;
- (id)siblingAssetHandleTypes;
@end
