@interface WKVideoLayerRemote : CALayer
@property (nonatomic) ^v mediaPlayerPrivateRemote;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoLayerFrame;
@property (nonatomic) C videoGravity;
- (id)init;
- (void)setVideoGravity:;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned char)videoGravity;
- (void)resolveBounds;
- (id)mediaPlayerPrivateRemote;
- (void)setMediaPlayerPrivateRemote:;
- (BOOL)resizePreservingGravity;
- (id)videoLayerFrame;
- (void)setVideoLayerFrame:;
@end
