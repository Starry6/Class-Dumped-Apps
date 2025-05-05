@interface IESClearSceneInterfaceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMediaClearStatus;
- (BOOL)isPowerSaveClear;
- (long long)powerSaveClearType;
- (void)setPowerSaveClearType:;
- (id)targetInstance;
+ (id)targetProtocol;
@end
