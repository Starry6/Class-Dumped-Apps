@interface Placeholder : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) NSString msg;
+ (id)descriptor;
@end
