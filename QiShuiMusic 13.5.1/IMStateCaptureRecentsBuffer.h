@interface IMStateCaptureRecentsBuffer : NSObject
@property (nonatomic) Q nextInsertionIndex;
@property (nonatomic) NSPointerArray trackedObjects;
@property (nonatomic) ^Q handles;
@property (nonatomic) NSString title;
@property (nonatomic) Q maximumNumberOfTrackedObjects;
- (void)dealloc;
- (id)title;
- (void).cxx_destruct;
- (id)handles;
- (void)setHandles:;
- (id)initWithTitle:maximumNumberOfTrackedObjects:queue:;
- (void)promoteRecentObject:;
- (void)registerStateCaptureBlockWithQueue:;
- (unsigned long long)maximumNumberOfTrackedObjects;
- (unsigned long long)nextInsertionIndex;
- (void)setNextInsertionIndex:;
- (id)trackedObjects;
- (void)setTrackedObjects:;
@end
