@interface IESECSliceXContainerUpdateContext : NSObject
@property (nonatomic) IESECSliceXDataSource dataSource;
@property (nonatomic) {CGSize=dd} fitSize;
@property (nonatomic) @? complete;
@property (nonatomic) BOOL avoidCalculateSize;
- (id)fitSize;
- (BOOL)avoidCalculateSize;
- (id)initWithDataSource:complete:;
- (id)initWithDataSource:fitSize:complete:;
- (void)setFitSize:;
- (id)complete;
- (void)setDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setComplete:;
@end
