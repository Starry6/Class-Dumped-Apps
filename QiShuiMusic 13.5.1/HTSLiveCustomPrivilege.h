@interface HTSLiveCustomPrivilege : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString iconURL;
+ (id)descriptor;
@end
