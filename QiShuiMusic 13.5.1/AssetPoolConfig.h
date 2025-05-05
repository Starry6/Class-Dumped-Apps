@interface AssetPoolConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger maxSize;
@property (nonatomic) NSInteger poolSize;
@property (nonatomic) NSInteger cleanStrategy;
+ (id)descriptor;
@end
