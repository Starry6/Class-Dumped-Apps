@interface IESSaaSTIMOMessagesDataSourceUpdate : NSObject
@property (nonatomic) IGListIndexSetResult cachedDiff;
@property (nonatomic) NSArray beforeUpdateMessageIdentifiers;
@property (nonatomic) NSArray afterUpdateMessageIdentifiers;
@property (nonatomic) NSArray previousData;
@property (nonatomic) NSArray nowData;
@property (nonatomic) q reason;
- (id)nowData;
- (id)afterUpdateMessageIdentifiers;
- (id)beforeUpdateMessageIdentifiers;
- (id)cachedDiff;
- (id)calcDiffs;
- (id)previousData;
- (void)setCachedDiff:;
- (void)setNowData:;
- (void)setPreviousData:;
- (long long)reason;
- (void)setReason:;
- (void).cxx_destruct;
@end
