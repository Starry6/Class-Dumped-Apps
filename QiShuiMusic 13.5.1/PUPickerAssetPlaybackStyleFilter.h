@interface PUPickerAssetPlaybackStyleFilter : NSObject
@property (nonatomic) q playbackStyle;
@property (nonatomic) BOOL isValidFilter;
@property (nonatomic) BOOL allowsSearchSuggestions;
@property (nonatomic) BOOL allowsAlbums;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)allowsSearchSuggestions;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)playbackStyle;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (id)initWithPlaybackStyle:;
- (BOOL)isValidFilter;
- (BOOL)allowsAlbums;
+ (BOOL)supportsSecureCoding;
@end
