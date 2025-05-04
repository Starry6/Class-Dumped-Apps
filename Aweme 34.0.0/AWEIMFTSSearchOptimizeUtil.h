@interface AWEIMFTSSearchOptimizeUtil : NSObject
+ (id)getSearchMsgContent:;
+ (id)getSearchMsgContentOpt:;
+ (BOOL)searchMsgAvailable:;
+ (BOOL)searchMsgCountAvailable:;
+ (id)extTypesDict;
+ (id)baseMessageTypes;
+ (id)additionalMessageTypes;
+ (id)busTypes;
+ (id)defaultSearchableMessageTypes;
+ (id)createAdditionalMessageTypesArray;
+ (id)defaultPrefixDict;
+ (id)updateSearchText:withoutMarkedTextSpace:;
+ (id)getPrefixStrWithMessage:;
@end
