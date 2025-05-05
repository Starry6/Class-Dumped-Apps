@interface SALocalSearchDisambiguationMap : SAUISnippet
@property (nonatomic) NSArray items;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:;
- (id)encodedClassName;
+ (id)disambiguationMap;
+ (id)disambiguationMapWithDictionary:context:;
@end
