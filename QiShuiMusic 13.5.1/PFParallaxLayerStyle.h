@interface PFParallaxLayerStyle : NSObject
@property (nonatomic) NSString kind;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) NSArray colorSuggestions;
- (id)kind;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithKind:parameters:colorSuggestions:;
- (BOOL)isEqualToParallaxLayerStyle:;
- (id)colorSuggestions;
+ (BOOL)supportsSecureCoding;
+ (id)styleWithDictionary:error:;
+ (BOOL)styleKind:supportsParameter:;
+ (BOOL)isSegmentedStyle:;
+ (id)dictionaryWithStyle:;
+ (id)serializeColorSuggestions:;
+ (id)serializeParameters:;
+ (id)serializeParameter:forKey:;
+ (id)deserializeParameters:error:;
+ (id)deserializeParameter:forKey:error:;
+ (id)deserializeColorSuggestions:error:;
+ (BOOL)validateParameters:error:;
+ (BOOL)validateParameterKey:value:error:;
@end
