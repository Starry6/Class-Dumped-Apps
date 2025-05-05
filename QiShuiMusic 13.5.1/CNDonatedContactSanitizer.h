@interface CNDonatedContactSanitizer : NSObject
+ (id)storeInfoFromPredicate:;
+ (void)markContactAndMultiValuesAsDonated:usingStoreInfo:andStoreIdentifier:;
+ (id)storeInfoByMergingStoreInfos:;
+ (id)sanitizeDonatedContact:matchingPredicate:;
+ (id)mutableCopyOfDonatedContact:withCustomIdentifier:;
@end
