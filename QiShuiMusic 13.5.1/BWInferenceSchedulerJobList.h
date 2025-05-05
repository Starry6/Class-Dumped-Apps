@interface BWInferenceSchedulerJobList : NSObject
@property (nonatomic) Q count;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)jobAtIndex:;
- (unsigned long long)count;
- (id)initWithCapacity:;
@end
