@interface HTSLiveDriveItem : IESLivePBBaseMessage
@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger type;
@property (nonatomic) q count;
+ (id)descriptor;
@end
