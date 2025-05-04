@interface AWEPackStats : NSObject
@property (nonatomic) double beginTime;
@property (nonatomic) double finishTime;
@property (nonatomic) double loadBeginTime;
@property (nonatomic) double loadFinishTime;
@property (nonatomic) NSError loadCoreError;
@property (nonatomic) NSDictionary loadErrors;
@property (nonatomic) double filterAssembleBeginTime;
@property (nonatomic) double filterAssembleFinishTime;
- (double)loadFinishTime;
- (void)setLoadFinishTime:;
- (void)setLoadBeginTime:;
- (double)loadBeginTime;
- (id)loadCoreError;
- (void)setLoadCoreError:;
- (id)loadErrors;
- (void)setLoadErrors:;
- (double)filterAssembleBeginTime;
- (void)setFilterAssembleBeginTime:;
- (double)filterAssembleFinishTime;
- (void)setFilterAssembleFinishTime:;
- (double)beginTime;
- (void)setBeginTime:;
- (void).cxx_destruct;
- (double)finishTime;
- (void)setFinishTime:;
@end
