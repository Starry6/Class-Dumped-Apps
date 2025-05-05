@interface PHAssetReference : PHObjectReference
@property (nonatomic) q mediaType;
@property (nonatomic) Q mediaSubtypes;
@property (nonatomic) Q sourceType;
@property (nonatomic) BOOL trashed;
- (long long)mediaType;
- (unsigned long long)sourceType;
- (unsigned long long)mediaSubtypes;
- (BOOL)isTrashed;
- (id)initWithDictionary:referenceType:;
- (id)dictionaryForReferenceType:;
- (id)initWithLocalIdentifier:libraryURL:mediaType:subtypes:sourceType:isTrashed:;
+ (id)representedType;
+ (id)referenceForAsset:;
@end
