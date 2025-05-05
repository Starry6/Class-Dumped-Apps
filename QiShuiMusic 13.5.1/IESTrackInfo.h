@interface IESTrackInfo : NSObject
@property (nonatomic) NSInteger videoTrackID;
@property (nonatomic) NSInteger realVideoTrackID;
@property (nonatomic) NSInteger audioTrackID;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} range;
@property (nonatomic) IESMediaData mediaData;
@property (nonatomic) BOOL allAudioInOneTrack;
@property (nonatomic) NSString inputFilterKey;
@property (nonatomic) BOOL isNeedMatting;
- (BOOL)allAudioInOneTrack;
- (int)audioTrackID;
- (id)inputFilterKey;
- (BOOL)isNeedMatting;
- (int)realVideoTrackID;
- (void)setAllAudioInOneTrack:;
- (void)setAudioTrackID:;
- (void)setIsNeedMatting:;
- (void)setRealVideoTrackID:;
- (void)setVideoTrackID:;
- (int)videoTrackID;
- (id)init;
- (void)dealloc;
- (void)setRange:;
- (id)range;
- (void).cxx_destruct;
- (id)mediaData;
- (void)setMediaData:;
@end
