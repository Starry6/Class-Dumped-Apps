@interface HTSLiveStreamUrl_LiveCoreSDKData_PushData_ResolutionParams : IESLivePBBaseMessage
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q defaultBitrate;
@property (nonatomic) q minBitrate;
@property (nonatomic) q maxBitrate;
@property (nonatomic) q fps;
+ (id)descriptor;
@end
