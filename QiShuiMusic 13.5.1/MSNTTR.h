@interface MSNTTR : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL TTRInProgress;
@property (nonatomic) BOOL pendedTTR;
- (id)url;
- (void)completeTTR:;
- (BOOL)TTRInProgress;
- (void)beginTTRWithTitle:date:;
- (void)setUrl:;
- (BOOL)pendedTTR;
- (void).cxx_destruct;
- (void)setPendedTTR:;
- (void)beginTTRWithTitle:;
- (void)continueTTR;
- (void)handleCallback:;
+ (id)sharedInstance;
@end
