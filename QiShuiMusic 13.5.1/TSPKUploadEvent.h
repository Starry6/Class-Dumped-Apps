@interface TSPKUploadEvent : TSPKBaseEvent
@property (nonatomic) NSString eventName;
@property (nonatomic) NSArray backtraces;
@property (nonatomic) NSMutableDictionary params;
@property (nonatomic) NSMutableDictionary filterParams;
@property (nonatomic) BOOL isALogUpload;
@property (nonatomic) Q type;
- (void)addExtraFilterParams:;
- (id)filterParams;
- (BOOL)isALogUpload;
- (void)setFilterParams:;
- (void)setIsALogUpload:;
- (id)tag;
- (id)backtraces;
- (void)setType:;
- (void)setBacktraces:;
- (unsigned long long)type;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
