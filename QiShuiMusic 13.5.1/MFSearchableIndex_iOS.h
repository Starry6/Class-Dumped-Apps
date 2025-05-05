@interface MFSearchableIndex_iOS : EDSearchableIndex
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPluggedIn;
- (void)removeSearchQueryCancelable:;
- (void)addSearchQueryCancelable:;
- (void)_indexMessage:includeBody:indexingType:;
- (BOOL)shouldCancelSearchQuery;
- (id)initWithName:dataSource:reasonProvider:;
- (void)indexMessages:includeBody:indexingType:;
- (id)powerObservable;
- (void)logPowerEventWithIdentifier:eventData:;
+ (id)log;
@end
