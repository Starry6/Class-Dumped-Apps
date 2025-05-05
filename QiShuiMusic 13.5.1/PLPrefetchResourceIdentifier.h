@interface PLPrefetchResourceIdentifier : NSObject
@property (nonatomic) NSString assetUuid;
@property (nonatomic) I version;
@property (nonatomic) Q cplType;
- (unsigned long long)cplType;
- (unsigned int)version;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)assetUuid;
- (id)initWithAssetUuid:version:cplType:;
+ (id)resourceDescriptionWithAssetUuid:resourceVersion:cplType:;
@end
