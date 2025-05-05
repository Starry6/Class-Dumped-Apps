@interface SASInterpretation : AceObject
@property (nonatomic) BOOL doNotDedup;
@property (nonatomic) NSArray tokens;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)af_speechTokens;
- (id)groupIdentifier;
- (void)setTokens:;
- (id)encodedClassName;
- (id)tokens;
- (BOOL)doNotDedup;
- (void)setDoNotDedup:;
+ (id)interpretation;
+ (id)interpretationWithDictionary:context:;
@end
