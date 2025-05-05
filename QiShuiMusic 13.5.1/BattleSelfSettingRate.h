@interface BattleSelfSettingRate : IESLivePBBaseMessage
@property (nonatomic) NSString mixSetUid;
@property (nonatomic) q pkValueType;
@property (nonatomic) q pk2LikeRate;
@property (nonatomic) q gift2PkRate;
@property (nonatomic) q giftUv2PkRate;
@property (nonatomic) q ticket2PkRate;
@property (nonatomic) NSString setOpenUid;
@property (nonatomic) q subscribePkRate;
- (id)mixSetUid;
+ (id)descriptor;
@end
