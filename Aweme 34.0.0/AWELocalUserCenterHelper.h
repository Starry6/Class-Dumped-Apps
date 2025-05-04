@interface AWELocalUserCenterHelper : NSObject
+ (BOOL)isColorRingTableValid;
+ (BOOL)enableSoftDelete;
+ (BOOL)disableLocalModifyAction:;
+ (long long)maxNumberOfLostPatch;
+ (id)dataCenterDeleteVersion;
+ (id)dataCenterTableDeleteVersion:;
+ (BOOL)isTableValid:;
+ (BOOL)enableLocalFriendsCount;
+ (BOOL)enableUserCenter;
+ (BOOL)isFriendTableValid;
@end
