@interface AWEViewFactoryControllerManager : AWEBaseControllerManager
@property (nonatomic) BOOL isExclusive;
- (void)updateByModel:;
- (void)recordUpdateByModel:controller:;
- (BOOL)isExclusive;
- (void)setIsExclusive:;
@end
