@interface StampQuery : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) NSInteger type;
+ (id)descriptor;
@end
