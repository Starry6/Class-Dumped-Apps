@interface PFPosterMediaSuggestion : PFPosterMedia
@property (nonatomic) NSString suggestionUUID;
@property (nonatomic) S suggestionSubtype;
- (id)suggestionUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setSuggestionUUID:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAssetUUID:suggestionUUID:suggestionSubtype:;
- (unsigned short)suggestionSubtype;
- (void)setSuggestionSubtype:;
+ (BOOL)supportsSecureCoding;
@end
