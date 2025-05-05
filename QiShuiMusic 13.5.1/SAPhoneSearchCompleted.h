@interface SAPhoneSearchCompleted : SABaseCommand
@property (nonatomic) NSArray phoneSearchResults;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)phoneSearchResults;
- (void)setPhoneSearchResults:;
+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:context:;
@end
