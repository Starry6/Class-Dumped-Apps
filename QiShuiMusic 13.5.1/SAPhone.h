@interface SAPhone : AceObject
@property (nonatomic) NSNumber favoriteFacetime;
@property (nonatomic) NSNumber favoriteFacetimeAudio;
@property (nonatomic) NSNumber favoriteVoice;
@property (nonatomic) NSString label;
@property (nonatomic) NSString number;
@property (nonatomic) NSNumber pseudo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)number;
- (id)groupIdentifier;
- (void)setLabel:;
- (id)label;
- (void)setNumber:;
- (id)encodedClassName;
- (id)favoriteFacetime;
- (void)setFavoriteFacetime:;
- (id)favoriteFacetimeAudio;
- (void)setFavoriteFacetimeAudio:;
- (id)pseudo;
- (void)setPseudo:;
- (id)favoriteVoice;
- (void)setFavoriteVoice:;
+ (id)phone;
+ (id)phoneWithDictionary:context:;
@end
