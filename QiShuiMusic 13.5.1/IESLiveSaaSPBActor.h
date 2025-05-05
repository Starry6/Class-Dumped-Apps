@interface IESLiveSaaSPBActor : GPBMessage
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString label;
+ (id)descriptor;
@end
