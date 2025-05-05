@interface SALCMContentList : SAAbstractItemList
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)contentList;
+ (id)contentListWithDictionary:context:;
@end
