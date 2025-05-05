@interface IESLiveSaaSInitResponse_ResponseData : GPBMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) BOOL supportUpdateLinkType;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) q maxMcNum;
@property (nonatomic) NSInteger scene;
@property (nonatomic) IESLiveSaaSPBMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveSaaSPBMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) BOOL isFirstInit;
@property (nonatomic) NSString functionType;
+ (id)descriptor;
@end
