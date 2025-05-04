@interface AWEMusicStreamingImpl.LunaTrackLyricsMatch : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString snippet;
@property (nonatomic) q startIndex;
@property (nonatomic) q endIndex;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)endIndex;
- (long long)startIndex;
- (void).cxx_destruct;
- (void)setStartIndex:;
- (void)setEndIndex:;
- (id)initWithCoder:;
- (id)snippet;
- (void)setSnippet:;
+ (id)JSONKeyPathsByPropertyKey;
@end
