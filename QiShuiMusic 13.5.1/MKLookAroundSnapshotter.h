@interface MKLookAroundSnapshotter : NSObject
@property (nonatomic) BOOL loading;
- (BOOL)isLoading;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithScene:options:;
- (void)getSnapshotWithCompletionHandler:;
@end
