@interface HTSLiveProConfProps : IESLivePBBaseMessage
@property (nonatomic) q current;
@property (nonatomic) q target;
@property (nonatomic) NSString unitText;
@property (nonatomic) BOOL showFloat;
@property (nonatomic) q formatFixed;
+ (id)descriptor;
@end
