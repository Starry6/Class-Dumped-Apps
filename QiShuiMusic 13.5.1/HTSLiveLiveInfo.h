@interface HTSLiveLiveInfo : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger episodeStage;
@property (nonatomic) q roomStartTime;
@property (nonatomic) NSInteger liveStatus;
@property (nonatomic) NSString vid;
@property (nonatomic) NSString replayIdStr;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) NSInteger delivery;
@property (nonatomic) q viewRight;
@property (nonatomic) NSString anchorSignTagContent;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) NSInteger paidLiveBringProductFlag;
+ (id)descriptor;
@end
