@interface HTSLiveWelfareProjectInfo : IESLivePBBaseMessage
@property (nonatomic) q projectId;
@property (nonatomic) q showFrequency;
@property (nonatomic) NSString containerCardURL;
@property (nonatomic) NSString welfareDetailPageURL;
@property (nonatomic) NSString projectIdStr;
+ (id)descriptor;
@end
