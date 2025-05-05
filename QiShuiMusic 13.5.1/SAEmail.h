@interface SAEmail : AceObject
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSNumber favoriteFacetime;
@property (nonatomic) NSNumber favoriteFacetimeAudio;
@property (nonatomic) NSString label;
@property (nonatomic) NSNumber pseudo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emailAddress;
- (id)groupIdentifier;
- (void)setEmailAddress:;
- (void)setLabel:;
- (id)label;
- (id)encodedClassName;
- (id)favoriteFacetime;
- (void)setFavoriteFacetime:;
- (id)favoriteFacetimeAudio;
- (void)setFavoriteFacetimeAudio:;
- (id)pseudo;
- (void)setPseudo:;
+ (id)email;
+ (id)emailWithDictionary:context:;
@end
