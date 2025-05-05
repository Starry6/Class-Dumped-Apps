@interface IESSaaSTIMOQuery : NSObject
@property (nonatomic) @? dbExecBlock;
@property (nonatomic) @? mappingBlock;
@property (nonatomic) NSError error;
@property (nonatomic) Q limit;
- (void)setDbExecBlock:;
- (id)dbExecBlock;
- (id)mappingBlock;
- (void)setMappingBlock:;
- (unsigned long long)limit;
- (void)setError:;
- (id)error;
- (void)setLimit:;
- (void).cxx_destruct;
@end
