@interface AWEMRSubscribeHelper : NSObject
+ (id)findSubcategoryOfServiceAccount:subcategoryId:;
+ (void)updateSubscribeStatusWithSubcategory:channelIndex:subscribeStatus:;
+ (BOOL)isSubcategorySubscribed:;
+ (void)associateServiceAccountAndSubcategory:;
+ (BOOL)isSubcategoryMultiChannel:;
+ (id)findServiceAccountOfSubcategory:;
+ (BOOL)isSubcategoryMultiChannelAndSubscribed:;
+ (id)subscribeStatusMsgWithSubcategory:;
+ (id)findChannelOfSubcategory:channelId:;
+ (id)subscribeStatusMsgWithServiceAccount:;
+ (void)updateSubscribeStatusWithServiceAccount:subscribeStatus:;
+ (void)updateDisturbStatusWithServiceAccount:disturbStatus:;
@end
