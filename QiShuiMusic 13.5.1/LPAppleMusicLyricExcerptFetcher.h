@interface LPAppleMusicLyricExcerptFetcher : LPFetcher
@property (nonatomic) MPStoreLyricsSnippetURLComponents lyricComponents;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)fetchWithConfiguration:completionHandler:;
- (void)completedWithLyrics:;
- (id)lyricComponents;
- (void)setLyricComponents:;
@end
