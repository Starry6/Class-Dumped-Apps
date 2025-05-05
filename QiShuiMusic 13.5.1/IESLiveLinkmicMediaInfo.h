@interface IESLiveLinkmicMediaInfo : IESLivePBBaseMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) IESLiveMultiRtcInfo multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (nonatomic) IESLiveMultiLiveCoreInfo multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
+ (id)descriptor;
@end
