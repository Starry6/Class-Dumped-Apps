@interface IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSMutableArray linkedUserArray;
@property (nonatomic) Q linkedUserArray_Count;
@property (nonatomic) HTSLiveAnchorLinkmicInfo mainAnchorLinkmicInfo;
@property (nonatomic) BOOL hasMainAnchorLinkmicInfo;
@property (nonatomic) HTSLiveAnchorLinkmicInfo backupAnchorLinkmicInfo;
@property (nonatomic) BOOL hasBackupAnchorLinkmicInfo;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) BOOL supportUpdateLinkType;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) NSString functionType;
+ (id)descriptor;
@end
