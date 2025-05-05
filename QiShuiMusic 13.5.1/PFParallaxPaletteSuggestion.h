@interface PFParallaxPaletteSuggestion : NSObject
@property (nonatomic) PFParallaxColor primaryColor;
@property (nonatomic) PFParallaxColor secondaryColor;
- (id)primaryColor;
- (id)secondaryColor;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isEqualToSuggestion:;
- (id)initWithPrimaryColor:secondaryColor:;
+ (BOOL)supportsSecureCoding;
+ (id)dictionaryWithPaletteSuggestion:;
+ (id)paletteSuggestionWithDictionary:error:;
@end
