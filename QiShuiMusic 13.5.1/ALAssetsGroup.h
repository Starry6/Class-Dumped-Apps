@interface ALAssetsGroup : NSObject
@property (nonatomic) ALAssetsGroupPrivate internal;
@property (nonatomic) BOOL editable;
- (void)setInternal:;
- (void)dealloc;
- (id)posterImage;
- (BOOL)isEditable;
- (id)internal;
- (id)valueForProperty:;
- (BOOL)isValid;
- (id)description;
- (id)_uuid;
- (long long)numberOfAssets;
- (BOOL)addAsset:;
- (void)enumerateAssetsUsingBlock:;
- (id)_typeAsString;
- (id)initWithPhotoAlbum:library:type:;
- (void)setAssetsFilter:;
- (void)_enumerateAssetsAtIndexes:options:usingBlock:;
- (void)enumerateAssetsWithOptions:usingBlock:;
- (void)enumerateAssetsAtIndexes:options:usingBlock:;
@end
