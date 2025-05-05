@interface CUTCheckpointSignpost : CUTCheckpoint
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) q scope;
@property (nonatomic) Q signpostID;
- (unsigned long long)signpostID;
- (void)setScope:;
- (id)log;
- (long long)scope;
- (void)setLog:;
- (void).cxx_destruct;
- (void)setSignpostID:;
- (id)initWithName:uniqueIdentifier:;
- (BOOL)_verifyMatchingName:;
@end
