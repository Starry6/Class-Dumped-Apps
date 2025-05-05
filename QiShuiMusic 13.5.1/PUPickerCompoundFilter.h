@interface PUPickerCompoundFilter : NSObject
@property (nonatomic) q filterType;
@property (nonatomic) NSArray subfilters;
@property (nonatomic) BOOL isValidFilter;
@property (nonatomic) BOOL allowsSearchSuggestions;
@property (nonatomic) BOOL allowsAlbums;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)filterType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)allowsSearchSuggestions;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)subfilters;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (id)initWithFilterType:subfilters:;
- (BOOL)isValidFilter;
- (BOOL)allowsAlbums;
+ (BOOL)supportsSecureCoding;
@end
