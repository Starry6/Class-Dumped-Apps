@interface AWEMusicStreamingSwiftImpl.MusicCardCell : UICollectionViewCell
@property (nonatomic) NSString referString;
- (void)player:playbackFailedWithError:;
- (void)player:didChangeStallState:;
- (void)player:playbackFailedForURL:error:;
- (void)player:didChangePlaybackToAction:;
- (void)configWithModel:isPureMode:parentVC:;
- (void)cardWillDisplay;
- (void)cardDidEndDisplay;
- (BOOL)shouldResponseToTap:from:;
- (void)player:updatePlayTime:canPlayTime:totalTime:playbackRate:;
- (void)updateCardVC:;
- (id)pinchTargetView;
- (void)play;
- (void)reset;
- (void)stop;
- (void)pause;
- (id)referString;
- (void)setReferString:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
