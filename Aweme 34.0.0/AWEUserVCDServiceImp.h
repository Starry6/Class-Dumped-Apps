@interface AWEUserVCDServiceImp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEUserNotSyncToOtherAppidAdapter;
+ (BOOL)vcdV2Enable;
+ (void)authorizeWithScope:complete:;
+ (void)authorizeWithScope:secondaryUid:shouldUnbind:complete:;
+ (Class)aAWEUserNotSyncToOtherAppidAdapterClass;
@end
