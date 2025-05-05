@interface EBAppLogStatement : NSObject
@property (nonatomic) q useCount;
@property (nonatomic) NSString query;
@property (nonatomic) ^v statement;
@property (nonatomic) BOOL inUse;
- (id)statement;
- (void)setStatement:;
- (void)dealloc;
- (BOOL)inUse;
- (void)setQuery:;
- (id)query;
- (void)close;
- (void)setUseCount:;
- (long long)useCount;
- (void).cxx_destruct;
- (void)reset;
- (void)setInUse:;
- (id)description;
@end
