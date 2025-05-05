@interface IESLiveSaaSPBSwitchSceneData : GPBMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSInteger scene;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) IESLiveSaaSPBMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveSaaSPBMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) q toLinkerId;
@property (nonatomic) IESLiveSaaSPBMultiAnchorExtra multiAnchorExtra;
@property (nonatomic) BOOL hasMultiAnchorExtra;
@property (nonatomic) NSInteger anchorUiLayout;
@property (nonatomic) NSInteger inviterFromScene;
+ (id)descriptor;
@end
