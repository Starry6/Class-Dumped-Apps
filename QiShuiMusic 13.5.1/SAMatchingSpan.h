@interface SAMatchingSpan : AceObject
@property (nonatomic) NSURL domainObjectIdentifier;
@property (nonatomic) q endIndex;
@property (nonatomic) q startIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setStartIndex:;
- (long long)startIndex;
- (id)encodedClassName;
- (void)setEndIndex:;
- (long long)endIndex;
- (id)domainObjectIdentifier;
- (void)setDomainObjectIdentifier:;
+ (id)matchingSpan;
+ (id)matchingSpanWithDictionary:context:;
@end
