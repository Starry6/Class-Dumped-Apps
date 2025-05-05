@interface RedsShowInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger dataType;
@property (nonatomic) NSString fullText;
+ (id)descriptor;
@end
