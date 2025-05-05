@interface IESLiveSubscribeInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isMember;
@property (nonatomic) q memberCount;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString memberCountStr;
@property (nonatomic) NSString memberCountSubstr;
+ (id)descriptor;
@end
