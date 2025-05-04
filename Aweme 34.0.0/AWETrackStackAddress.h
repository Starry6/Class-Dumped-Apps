@interface AWETrackStackAddress : NSObject
@property (nonatomic) NSMutableArray rangeArr;
@property (nonatomic) NSInteger aweTrackBacktraceStep;
@property (nonatomic) NSInteger bdTrackProtocolBacktraceStep;
@property (nonatomic) NSInteger backtraceDepth;
- (id)slidedStackAddrWithStack:FromStep:ForDepth:;
- (id)rangeArr;
- (id)locateAddr:ToImage:;
- (void)addLockedRangeArrWithRange:;
- (void)addImageListListener;
- (void)setRangeArr:;
- (int)aweTrackBacktraceStep;
- (void)setAweTrackBacktraceStep:;
- (int)bdTrackProtocolBacktraceStep;
- (void)setBdTrackProtocolBacktraceStep:;
- (int)backtraceDepth;
- (void)setBacktraceDepth:;
- (id)init;
- (void).cxx_destruct;
+ (id)backtraceStackAddress;
+ (void)awetrack_eventV3:params:;
+ (id)appNumber;
+ (id)sharedInstance;
+ (id)appVersion;
@end
