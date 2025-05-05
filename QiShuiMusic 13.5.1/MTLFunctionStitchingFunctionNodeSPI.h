@interface MTLFunctionStitchingFunctionNodeSPI : MTLFunctionStitchingFunctionNode
@property (nonatomic) BOOL isEarlyReturn;
- (id)initWithName:arguments:controlDependencies:isEarlyReturn:;
- (unsigned long long)hash;
- (BOOL)isEarlyReturn;
- (void)setIsEarlyReturn:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
