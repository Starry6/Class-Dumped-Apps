@interface RtcExtInfo : IESLivePBBaseMessage
@property (nonatomic) NSString linkMicIdStr;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExrInfo;
@property (nonatomic) NSString rtcStrategy;
@property (nonatomic) NSString publicStreamId;
+ (id)descriptor;
@end
