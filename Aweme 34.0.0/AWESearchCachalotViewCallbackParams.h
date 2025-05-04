@interface AWESearchCachalotViewCallbackParams : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) q insertCount;
@property (nonatomic) q totalCount;
- (void)setInsertCount:;
- (long long)totalCount;
- (void)setError:;
- (void)setSuccess:;
- (long long)insertCount;
- (void).cxx_destruct;
- (id)error;
- (BOOL)success;
- (void)setTotalCount:;
@end
