@interface IESECSliceXExprCoreResponse : NSObject
@property (nonatomic) @ result;
@property (nonatomic) NSError error;
@property (nonatomic) double execCost;
@property (nonatomic) BOOL parseHitCache;
- (double)execCost;
- (BOOL)parseHitCache;
- (void)setExecCost:;
- (void)setParseHitCache:;
- (id)result;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)setResult:;
@end
