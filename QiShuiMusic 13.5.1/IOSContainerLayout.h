@interface IOSContainerLayout : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) IOSContainerLayoutRule layoutRule;
@property (nonatomic) BOOL hasLayoutRule;
+ (id)descriptor;
@end
