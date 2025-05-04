@interface AWEScreenCastCompilationContentService : AWEScreenCastContentBaseService
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)requestWithParams:pullType:completion:;
- (id)path;
- (void).cxx_destruct;
@end
