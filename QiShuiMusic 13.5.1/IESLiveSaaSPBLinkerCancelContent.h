@interface IESLiveSaaSPBLinkerCancelContent : GPBMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) q cancelType;
@property (nonatomic) NSInteger inviteSource;
+ (id)descriptor;
@end
