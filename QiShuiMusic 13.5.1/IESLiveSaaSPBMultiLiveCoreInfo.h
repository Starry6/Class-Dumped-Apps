@interface IESLiveSaaSPBMultiLiveCoreInfo : GPBMessage
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSInteger liveCoreInfoOneOfCase;
@property (nonatomic) IESLiveSaaSPBVideoEqualRoomLiveCoreInfo videoEqualRoomLiveCoreInfo;
@property (nonatomic) IESLiveSaaSPBMultiAnchorLinkmicLiveCoreInfo multiAnchorLinkmicLiveCoreInfo;
@property (nonatomic) IESLiveSaaSPBVideoPositionLiveCoreInfo videoPositionLiveCoreInfo;
+ (id)descriptor;
@end
