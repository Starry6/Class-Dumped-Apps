@interface DIRSEventBatchOptions : NSObject
@property (nonatomic) NSArray excludeTypes;
@property (nonatomic) NSArray includeTypes;
@property (nonatomic) q priority;
@property (nonatomic) NSArray regionKeys;
@property (nonatomic) NSArray eventIDs;
@property (nonatomic) Q count;
- (id)includeTypes;
- (void)setEventIDs:;
- (void)setExcludeTypes:;
- (void)setIncludeTypes:;
- (void)setRegionKeys:;
- (void)setCount:;
- (id)excludeTypes;
- (void)setPriority:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (long long)priority;
- (id)eventIDs;
- (id)regionKeys;
@end
