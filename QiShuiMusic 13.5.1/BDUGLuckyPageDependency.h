@interface BDUGLuckyPageDependency : BDUGLuckyBDModel
@property (nonatomic) NSArray dependencies;
@property (nonatomic) double startTs;
@property (nonatomic) double endTs;
- (double)startTs;
- (double)endTs;
- (void)setEndTs:;
- (void)setStartTs:;
- (id)dependencies;
- (void).cxx_destruct;
- (void)setDependencies:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
