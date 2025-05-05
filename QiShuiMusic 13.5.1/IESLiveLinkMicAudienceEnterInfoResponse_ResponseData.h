@interface IESLiveLinkMicAudienceEnterInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) q roomId;
@property (nonatomic) NSString functionType;
@property (nonatomic) IESLiveLinkMicAudiencePlaymodeInfo playmodeInfo;
@property (nonatomic) BOOL hasPlaymodeInfo;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) HTSLiveLinkmicPlayModeInfo playModeInfoV2;
@property (nonatomic) BOOL hasPlayModeInfoV2;
+ (id)descriptor;
@end
