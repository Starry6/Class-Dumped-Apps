@interface AWEIMAudioEmojiDataController : NSObject
@property (nonatomic) NSString defaultAudioEmojiPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanExpiredFiles;
- (void)cleanAllFiles;
- (id)filePathWithEmoticonModel:markAccess:;
- (BOOL)fileExistWithEmoticonModel:;
- (void)downloadAudioWithContext:;
- (void)logAudioEmoji:reason:extra:;
- (void)setDefaultAudioEmojiPath:;
- (BOOL)p_needRefreshURLForError:;
- (void)p_retryDownloadAfterRefreshURLWithEmojiContext:fileName:emoticonModel:completion:;
- (id)defaultAudioEmojiPath;
- (void)asyncMarkAccessForPath:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
