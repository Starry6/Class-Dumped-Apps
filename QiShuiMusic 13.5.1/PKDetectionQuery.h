@interface PKDetectionQuery : PKQuery
@property (nonatomic) CHQuery query;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)teardown;
- (void)start;
- (void)setQuery:;
- (id)query;
- (void).cxx_destruct;
- (void)pause;
- (void)queryDidUpdateResult:;
@end
