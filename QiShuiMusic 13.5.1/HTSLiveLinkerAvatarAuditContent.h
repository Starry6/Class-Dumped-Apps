@interface HTSLiveLinkerAvatarAuditContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger auditRes;
@property (nonatomic) NSString reason;
@property (nonatomic) q reviewId;
+ (id)descriptor;
@end
