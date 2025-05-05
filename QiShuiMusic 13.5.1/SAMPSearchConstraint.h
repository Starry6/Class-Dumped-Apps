@interface SAMPSearchConstraint : AceObject
@property (nonatomic) NSArray mediaPlayerOrderingTerms;
@property (nonatomic) NSString query;
@property (nonatomic) NSArray searchProperties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (void)setSearchProperties:;
- (id)encodedClassName;
- (id)searchProperties;
- (id)mediaPlayerOrderingTerms;
- (void)setMediaPlayerOrderingTerms:;
+ (id)searchConstraint;
+ (id)searchConstraintWithDictionary:context:;
@end
