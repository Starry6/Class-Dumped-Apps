@interface MSVLyricsSection : MSVLyricsElement
@property (nonatomic) q songPart;
@property (nonatomic) NSString songPartText;
@property (nonatomic) NSArray lines;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)lines;
- (void)setLines:;
- (void)setSongPartText:;
- (long long)songPart;
- (void)setSongPart:;
- (id)songPartText;
+ (long long)_songPartForText:;
@end
