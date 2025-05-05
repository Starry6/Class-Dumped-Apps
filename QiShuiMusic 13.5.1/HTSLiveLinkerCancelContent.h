@interface HTSLiveLinkerCancelContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) q cancelType;
@property (nonatomic) NSInteger inviteSource;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
