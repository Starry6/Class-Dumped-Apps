@interface HTSLiveStatistics : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) q commentCount;
@property (nonatomic) q diggCount;
@property (nonatomic) q downloadCount;
@property (nonatomic) q playCount;
@property (nonatomic) q shareCount;
@property (nonatomic) q forwardCount;
@property (nonatomic) NSInteger loseCount;
@property (nonatomic) NSInteger loseCommentCount;
+ (id)descriptor;
@end
