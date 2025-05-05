@interface PLManagedLegacyFaceAlbum : PLManagedAlbum
@property (nonatomic) s keyAssetFaceIdentifier;
@property (nonatomic) NSInteger keyAssetFaceThumbnailIndex;
+ (id)entityName;
@end
