@interface AWEDCFeedDataDuplicateFilter : NSObject
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) NSMutableSet filteredIDSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterDataArrayWithRequestType:dataArray:args:;
- (id)duplicateFilterConfig;
- (id)classNameWithReferString;
- (id)filteredIDSet;
- (void)setFilteredIDSet:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)removeItemIDs:;
- (void)setupWithContext:;
@end
