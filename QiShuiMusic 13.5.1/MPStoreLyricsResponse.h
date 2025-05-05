@interface MPStoreLyricsResponse : NSObject
@property (nonatomic) BOOL TTML;
@property (nonatomic) NSString lyricsContent;
@property (nonatomic) NSString lyricsID;
- (void).cxx_destruct;
- (BOOL)isTTML;
- (void)setTTML:;
- (id)lyricsContent;
- (void)setLyricsContent:;
- (id)lyricsID;
- (void)setLyricsID:;
@end
