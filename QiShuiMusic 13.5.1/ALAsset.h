@interface ALAsset : NSObject
@property (nonatomic) ALAssetPrivate internal;
@property (nonatomic) ALAsset originalAsset;
@property (nonatomic) BOOL editable;
- (void)setInternal:;
- (void)dealloc;
- (BOOL)isEditable;
- (id)internal;
- (id)valueForProperty:;
- (id)thumbnail;
- (BOOL)isValid;
- (id)description;
- (id)_uuid;
- (BOOL)isDeletable;
- (id)originalAsset;
- (id)defaultRepresentation;
- (id)aspectRatioThumbnail;
- (id)initWithManagedAsset:library:;
- (id)_typeAsString;
- (id)representationForUTI:;
- (void)writeModifiedImageDataToSavedPhotosAlbum:metadata:completionBlock:;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:completionBlock:;
- (id)_newContentEditingOutputWithType:;
- (void)setImageData:metadata:completionBlock:;
- (void)setVideoAtPath:completionBlock:;
- (void)requestDefaultRepresentation;
+ (id)largePreviewImageSizeForSize:;
@end
