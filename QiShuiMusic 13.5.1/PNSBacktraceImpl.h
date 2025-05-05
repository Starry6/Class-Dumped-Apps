@interface PNSBacktraceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formatBacktraces:;
- (id)getBacktracesWithSkippedDepth:needAllThreads:;
- (id)getCurrentBacktraceAddressesWithSkippedDepth:;
- (void)getFormatBacktracesWithNeedAllThreads:callback:;
- (unsigned long long)getImageHeaderAddressWithName:;
- (unsigned long long)getRecentSystemLinesWithSkippedDepth:;
- (id)mergeBacktracesWithFirst:second:;
@end
