@interface AWEShareHotspotTimelineTask : AWEShareWebTask
@property (nonatomic) UIImage headerImage;
@property (nonatomic) UIImage snapshotImage;
@property (nonatomic) double roundedOffset;
- (double)roundedOffset;
- (void)setRoundedOffset:;
- (void)prepareWithChannel:inView:;
- (id)p_finalImageWithoutQRCodeImage;
- (id)p_drawBottomBarImageWithWidth:;
- (id)snapshotImage;
- (void).cxx_destruct;
- (void)setSnapshotImage:;
- (id)headerImage;
- (void)setHeaderImage:;
+ (id)taskWithWebModel:;
+ (void)configHotSpotChannelWithContext:;
+ (id)removeType:InChannels:;
@end
