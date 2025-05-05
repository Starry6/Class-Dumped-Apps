@interface SAPhoneVoiceMailItemList : SAAbstractItemList
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)voiceMailItemList;
+ (id)voiceMailItemListWithDictionary:context:;
@end
