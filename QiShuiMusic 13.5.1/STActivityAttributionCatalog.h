@interface STActivityAttributionCatalog : NSObject
@property (nonatomic) NSMutableDictionary attributionsByKey;
@property (nonatomic) BOOL empty;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (id)dataByApplyingDiff:;
- (id)allKeys;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)diffFromData:;
- (void)enumerateAttributionsUsingBlock:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)attributionsByKey;
- (id)initWithAttributionsByKey:;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)attributionsForKey:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
