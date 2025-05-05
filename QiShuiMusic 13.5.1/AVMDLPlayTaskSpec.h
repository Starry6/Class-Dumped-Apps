@interface AVMDLPlayTaskSpec : AVMDLTaskSpec
@property (nonatomic) Q limitSize;
@property (nonatomic) BOOL isNative;
- (unsigned long long)limitSize;
- (void)setIsNative:;
- (void)setLimitSize:;
- (id)init;
- (BOOL)isNative;
@end
