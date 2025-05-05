@interface CNAutocompleteQueryCacheMissAuditor : NSObject
@property (nonatomic) CNAutocompleteQueryCacheMissLogger logger;
@property (nonatomic) NSArray cachedResults;
- (id)logger;
- (id)init;
- (void)setLogger:;
- (id)cachedResults;
- (void).cxx_destruct;
- (id)description;
- (void)setCachedResults:;
- (id)initWithLogger:;
- (void)didReturnCachedResults:;
- (void)didReturnLiveResults:;
@end
