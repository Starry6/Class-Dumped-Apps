@interface AWEOriginalSoundTrackFoldMediaViewModel : NSObject
@property (nonatomic) AWEMusicFoldMediaModel foldMediaModel;
@property (nonatomic) BOOL fold;
@property (nonatomic) q beginIndex;
@property (nonatomic) q endIndex;
- (BOOL)isFold;
- (id)foldMediaModel;
- (void)setFoldMediaModel:;
- (id)init;
- (long long)endIndex;
- (void).cxx_destruct;
- (void)setEndIndex:;
- (long long)beginIndex;
- (void)setBeginIndex:;
- (void)setFold:;
@end
