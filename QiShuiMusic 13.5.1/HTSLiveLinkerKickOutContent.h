@interface HTSLiveLinkerKickOutContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSInteger controlType;
@property (nonatomic) q paidCount;
@property (nonatomic) q linkDuration;
@property (nonatomic) NSInteger kickOutSource;
+ (id)descriptor;
@end
