@interface AWEECOMIMFloatContainerConfig : NSObject
@property (nonatomic) UIImageView snapshotImageView;
@property (nonatomic) double heightPercent;
@property (nonatomic) BOOL enableTapBackgroundToClose;
@property (nonatomic) @? willCloseFloatContainerBlock;
@property (nonatomic) @? didCloseFloatContainerBlock;
- (void)setEnableTapBackgroundToClose:;
- (void)setWillCloseFloatContainerBlock:;
- (BOOL)enableTapBackgroundToClose;
- (id)willCloseFloatContainerBlock;
- (id)didCloseFloatContainerBlock;
- (void)setDidCloseFloatContainerBlock:;
- (id)init;
- (void).cxx_destruct;
- (id)snapshotImageView;
- (void)setSnapshotImageView:;
- (double)heightPercent;
- (void)setHeightPercent:;
@end
