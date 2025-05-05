@interface IESLiveSwitchSceneData : IESLivePBBaseMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSInteger scene;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) q toLinkerId;
@property (nonatomic) IESLiveMultiAnchorExtra multiAnchorExtra;
@property (nonatomic) BOOL hasMultiAnchorExtra;
@property (nonatomic) NSInteger anchorUiLayout;
@property (nonatomic) NSInteger inviterFromScene;
@property (nonatomic) IESLiveAnchorLayoutInfo layoutInfo;
@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) q version;
@property (nonatomic) IESLivePreRTCInfo preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
+ (id)descriptor;
@end
