@interface HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString sdkKey;
@property (nonatomic) NSString vCodec;
@property (nonatomic) NSString resolution;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger vBitRate;
@property (nonatomic) NSString additionalContent;
@property (nonatomic) NSInteger fps;
@property (nonatomic) NSInteger disable;
+ (id)descriptor;
@end
