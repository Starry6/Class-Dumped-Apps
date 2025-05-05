@interface AspectTracker : NSObject
@property (nonatomic) # trackedClass;
@property (nonatomic) NSMutableSet selectorNames;
@property (nonatomic) AspectTracker parentEntry;
- (id)initWithTrackedClass:parent:;
- (id)selectorNames;
- (void)setSelectorNames:;
- (void)setTrackedClass:;
- (Class)trackedClass;
- (void).cxx_destruct;
- (id)description;
- (id)parentEntry;
- (void)setParentEntry:;
@end
