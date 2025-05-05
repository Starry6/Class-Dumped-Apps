@interface FLEXHeapSnapshot : NSObject
@property (nonatomic) NSArray classNames;
@property (nonatomic) NSDictionary instanceCountsForClassNames;
@property (nonatomic) NSDictionary instanceSizesForClassNames;
- (id)classNames;
- (id)instanceCountsForClassNames;
- (id)instanceSizesForClassNames;
- (void).cxx_destruct;
+ (id)snapshotWithCounts:sizes:;
@end
