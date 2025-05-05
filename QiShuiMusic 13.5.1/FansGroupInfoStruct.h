@interface FansGroupInfoStruct : IESLivePBBaseMessage
@property (nonatomic) q groupId;
@property (nonatomic) NSString name;
@property (nonatomic) NSString imageURL;
@property (nonatomic) q groupNumber;
+ (id)descriptor;
@end
