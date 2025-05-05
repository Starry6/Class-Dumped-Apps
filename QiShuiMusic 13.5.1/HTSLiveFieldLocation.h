@interface HTSLiveFieldLocation : IESLivePBBaseMessage
@property (nonatomic) NSInteger locationX;
@property (nonatomic) NSInteger locationY;
+ (id)descriptor;
@end
