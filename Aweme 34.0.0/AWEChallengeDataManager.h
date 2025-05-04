@interface AWEChallengeDataManager : NSObject
+ (void)requestChallengeItemWithID:isCommerce:completion:;
+ (void)requestChallengeItemsWithIDArray:completion:;
+ (void)requestTaskItemWithID:completion:;
+ (void)requestChallengeItemWithName:isCommerce:completion:;
+ (id)appTheme;
+ (id)getExpectedSizeInfo;
+ (void)requestAwemeListWithID:isCommerce:pullType:cursor:count:enterFrom:type:sourceType:extraParams:completion:;
+ (void)requestAwemeListWithHashtagName:isCommerce:pullType:cursor:count:enterFrom:type:sourceType:extraParams:completion:;
+ (id)addMACAddressIfNeeded:;
+ (void)requestChallengeRelatedItemsWithID:isCommerce:previewID:enterFrom:type:completion:;
+ (void)requestChallengeRelatedItemsWithName:isCommerce:enterFrom:type:completion:;
@end
