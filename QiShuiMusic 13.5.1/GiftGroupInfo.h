@interface GiftGroupInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger groupCount;
@property (nonatomic) NSString groupText;
+ (id)descriptor;
@end
