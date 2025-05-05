@interface PAAccessRecordCoalescingWindowRolledOverState : NSObject
@property (nonatomic) q epoch;
@property (nonatomic) NSMutableDictionary groupedRecordsByMatcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)epoch;
- (void).cxx_destruct;
- (id)recordsToRepublish;
- (id)groupedRecordsByMatcher;
- (id)initByEndingPreviousWindow:reversed:withInitialAccessRecord:forNewEpoch:;
@end
