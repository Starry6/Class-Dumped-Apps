@interface HTSLiveStreamAddr : IESLivePBBaseMessage
@property (nonatomic) NSString resolutionKey;
@property (nonatomic) NSString resolutionName;
@property (nonatomic) NSString tslPullURL;
+ (id)descriptor;
@end
