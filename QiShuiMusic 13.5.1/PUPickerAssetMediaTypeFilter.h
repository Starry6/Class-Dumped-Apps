@interface PUPickerAssetMediaTypeFilter : NSObject
@property (nonatomic) q mediaType;
@property (nonatomic) BOOL isValidFilter;
@property (nonatomic) BOOL allowsSearchSuggestions;
@property (nonatomic) BOOL allowsAlbums;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)mediaType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithMediaType:;
- (BOOL)allowsSearchSuggestions;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (BOOL)isValidFilter;
- (BOOL)allowsAlbums;
+ (BOOL)supportsSecureCoding;
@end
