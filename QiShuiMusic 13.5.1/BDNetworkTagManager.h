@interface BDNetworkTagManager : NSObject
+ (id)autoTriggerTagInfo;
+ (void)disableTagCapacity:;
+ (id)filterTagFromContext:;
+ (id)manualTriggerTagInfo;
+ (id)tagForType:;
+ (BOOL)isNewUser;
@end
