@interface IESLiveSaasBaseInfo : IESLivePBBaseMessage
@property (nonatomic) NSString hostNickname;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) q xiguaUid;
+ (id)descriptor;
@end
