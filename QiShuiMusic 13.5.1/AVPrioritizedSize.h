@interface AVPrioritizedSize : NSObject
@property (nonatomic) NSMutableArray requiredPrioritySizes;
@property (nonatomic) NSMutableArray veryHighPrioritySizes;
@property (nonatomic) NSMutableArray highPrioritySizes;
@property (nonatomic) NSMutableArray mediumPrioritySizes;
@property (nonatomic) NSMutableArray lowPrioritySizes;
@property (nonatomic) {CGSize=dd} currentTotalSize;
- (id)init;
- (void).cxx_destruct;
- (void)addSize:withPriority:;
- (id)removeLastSizeOfPriority:;
- (id)currentTotalSize;
- (void)setCurrentTotalSize:;
- (id)requiredPrioritySizes;
- (void)setRequiredPrioritySizes:;
- (id)veryHighPrioritySizes;
- (void)setVeryHighPrioritySizes:;
- (id)highPrioritySizes;
- (void)setHighPrioritySizes:;
- (id)mediumPrioritySizes;
- (void)setMediumPrioritySizes:;
- (id)lowPrioritySizes;
- (void)setLowPrioritySizes:;
+ (id)sizesResolvingFirstPrioritizedSize:secondPrioritizedSize:inAvailableWidth:;
@end
