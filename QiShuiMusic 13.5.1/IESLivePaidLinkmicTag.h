@interface IESLivePaidLinkmicTag : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage pic;
@property (nonatomic) BOOL hasPic;
+ (id)descriptor;
@end
