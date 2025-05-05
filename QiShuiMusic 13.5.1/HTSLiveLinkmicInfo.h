@interface HTSLiveLinkmicInfo : IESLivePBBaseMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) q linkMicId;
@property (nonatomic) BOOL joinable;
@property (nonatomic) NSInteger confluenceType;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) q vendor;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
+ (id)descriptor;
@end
