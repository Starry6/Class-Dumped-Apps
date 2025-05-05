@interface HTSLiveOfficialChannelExtraInfo : IESLivePBBaseMessage
@property (nonatomic) q showStartTs;
@property (nonatomic) NSString showlistSchema;
@property (nonatomic) q showlistId;
@property (nonatomic) NSString showlistName;
+ (id)descriptor;
@end
