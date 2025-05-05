@interface CSJBackupRenderNativeStrategy : CSJBackupRenderStrategy
@property (nonatomic) CSJCoverView coverView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)playerTotalTime;
- (void)async_to_main_render_really;
- (void)coverViewClick:areaCategory:clickExtraInfo:;
- (void)coverViewClickAdLogo:;
- (void)coverViewClickClose:;
- (void)coverViewClickDownload:clickExtraInfo:;
- (void)coverViewClickVideo:;
- (id)logKeyName;
- (long long)renderType;
- (void)render_really;
- (void)updateWithThemeStatus:;
- (void).cxx_destruct;
- (void)render;
- (double)playerCurrentTime;
- (id)coverView;
- (void)setCoverView:;
@end
