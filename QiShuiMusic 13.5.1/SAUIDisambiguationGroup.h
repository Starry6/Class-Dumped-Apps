@interface SAUIDisambiguationGroup : SAAceView
@property (nonatomic) NSData af_disambiguationIdentifier;
@property (nonatomic) AFDisambiguationInfo af_disambiguationInfo;
@property (nonatomic) NSArray disambiguationLists;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)af_disambiguationIdentifier;
- (id)af_indexIdentifierForItem:;
- (id)af_itemForIndexIdentifier:;
- (id)af_disambiguationInfo;
- (void)af_setDisambiguationInfo:;
- (id)af_assistedSelectionItem;
- (void)af_saveItemSelection:forType:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)disambiguationLists;
- (void)setDisambiguationLists:;
+ (id)disambiguationGroup;
+ (id)disambiguationGroupWithDictionary:context:;
@end
