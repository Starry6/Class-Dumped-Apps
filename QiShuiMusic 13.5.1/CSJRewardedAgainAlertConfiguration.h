@interface CSJRewardedAgainAlertConfiguration : NSObject
@property (nonatomic) CSJMaterialMeta material;
@property (nonatomic) BOOL useBackupAlert;
@property (nonatomic) NSString slotId;
@property (nonatomic) CSJNativeExpressVideoAdContext context;
@property (nonatomic) CSJRewardedVideoModel rewardedAgainVideoModel;
@property (nonatomic) BOOL validEntranceFix;
- (id)rewardedAgainVideoModel;
- (void)setRewardedAgainVideoModel:;
- (void)setUseBackupAlert:;
- (void)setValidEntranceFix:;
- (BOOL)useBackupAlert;
- (BOOL)validEntranceFix;
- (id)slotId;
- (void)setSlotId:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)material;
- (void)setMaterial:;
@end
