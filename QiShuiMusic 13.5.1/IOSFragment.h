@interface IOSFragment : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isOpen;
+ (id)descriptor;
@end
