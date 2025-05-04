@interface AWETrackerDataTransmissionChainModified : NSObject
@property (nonatomic) NSPointerArray chain;
- (void)setChain:;
- (BOOL)containsWhere:;
- (id)init;
- (void).cxx_destruct;
- (id)chain;
+ (id)chainFromPointerArray:;
@end
