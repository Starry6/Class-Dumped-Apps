@interface HTSLiveTime2Picture : IESLivePBBaseMessage
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString pictureURL;
+ (id)descriptor;
@end
