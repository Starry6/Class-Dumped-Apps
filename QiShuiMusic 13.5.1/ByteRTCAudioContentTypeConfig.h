@interface ByteRTCAudioContentTypeConfig : NSObject
@property (nonatomic) BOOL hasMic;
@property (nonatomic) BOOL hasScreenAudio;
@property (nonatomic) BOOL hasMediaPlayer;
- (BOOL)hasScreenAudio;
- (void)setHasScreenAudio:;
- (BOOL)hasMediaPlayer;
- (void)setHasMediaPlayer:;
- (id)init;
- (void)setHasMic:;
- (BOOL)hasMic;
@end
