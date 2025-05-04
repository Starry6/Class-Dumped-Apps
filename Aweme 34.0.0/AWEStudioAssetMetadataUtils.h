@interface AWEStudioAssetMetadataUtils : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)propListWithAsset:metadata:;
+ (id)jsonStringWithMetaModel:index:;
+ (id)momentMetaModelWithJsonString:;
+ (id)jsonStringWithMomentMetaModel:;
+ (id)uploadOriginWithAsset:metadata:;
+ (id)metaModelWithAsset:metadata:;
+ (id)productIdWithMetaValue:isValidJson:;
+ (id)metaModelWithJsonString:;
+ (id)duetOriginIDWithAsset:metadata:;
+ (id)duetFromWithAsset:metadata:;
+ (void)loadMetadataForAsset:completion:;
+ (id)imageProperties:;
@end
