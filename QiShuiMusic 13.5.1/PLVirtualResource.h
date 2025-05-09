@interface PLVirtualResource : NSObject
@property (nonatomic) NSURL fileURL;
@property (nonatomic) I resourceType;
@property (nonatomic) I version;
@property (nonatomic) I recipeID;
@property (nonatomic) I orientation;
@property (nonatomic) <PLResourceDataStore> dataStore;
@property (nonatomic) q dataStoreSubtype;
@property (nonatomic) <PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) s remoteAvailability;
@property (nonatomic) float scale;
@property (nonatomic) q unorientedWidth;
@property (nonatomic) q unorientedHeight;
@property (nonatomic) NSInteger qualitySortValue;
@property (nonatomic) NSString codecFourCharCodeName;
@property (nonatomic) PLUniformTypeIdentifier uniformTypeIdentifier;
@property (nonatomic) q orientedWidth;
@property (nonatomic) q orientedHeight;
@property (nonatomic) <PLAssetID> assetID;
@property (nonatomic) Q cplType;
@property (nonatomic) s localAvailability;
@property (nonatomic) s localAvailabilityTarget;
@property (nonatomic) s remoteAvailabilityTarget;
@property (nonatomic) q dataLength;
@property (nonatomic) q estimatedDataLength;
@property (nonatomic) s trashedState;
@property (nonatomic) NSDate trashedDate;
@property (nonatomic) s utiConformanceHint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataStoreKey:;
- (void)setDataStore:;
- (id)dataStore;
- (unsigned long long)cplType;
- (void)setUnorientedWidth:;
- (BOOL)isDefaultOrientation;
- (id)dataStoreKey;
- (long long)unorientedHeight;
- (long long)dataLength;
- (id)trashedDate;
- (short)trashedState;
- (int)qualitySortValue;
- (void)setRemoteAvailability:;
- (void)setUniformTypeIdentifier:;
- (void)setRecipeID:;
- (id)validateForAssetID:resourceIdentity:;
- (void)setUnorientedHeight:;
- (long long)unorientedWidth;
- (BOOL)isPlayableVideo;
- (void)setQualitySortValue:;
- (id)uniformTypeIdentifier;
- (void)setScale:;
- (BOOL)isInCloud;
- (void)setVersion:;
- (unsigned int)version;
- (unsigned int)resourceType;
- (void)setResourceType:;
- (unsigned int)orientation;
- (id)debugDescription;
- (BOOL)isDerivative;
- (long long)orientedHeight;
- (unsigned int)recipeID;
- (id)singleLineDescription;
- (long long)orientedWidth;
- (void).cxx_destruct;
- (short)remoteAvailability;
- (id)fileURL;
- (long long)estimatedDataLength;
- (float)scaleGivenAssetHasAdjustments:currentWidth:currentHeight:;
- (id)codecFourCharCodeName;
- (short)localAvailabilityTarget;
- (float)scale;
- (id)assetID;
- (void)setOrientation:;
- (id)photosCTLJSONDict;
- (long long)dataStoreSubtype;
- (short)localAvailability;
- (short)remoteAvailabilityTarget;
- (short)utiConformanceHint;
- (id)initWithAsset:resourceType:version:recipeID:;
- (void)setDataStoreSubtype:;
- (void)setCodecFourCharCodeName:;
- (id)initWithRecipe:forAsset:;
@end
