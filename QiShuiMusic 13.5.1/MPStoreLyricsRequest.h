@interface MPStoreLyricsRequest : NSObject
@property (nonatomic) MPModelSong song;
- (id)newOperationWithResponseHandler:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)song;
- (void)setSong:;
+ (BOOL)supportsLyricsForURLBag:;
+ (BOOL)supportsLyricsForURLBagDictionary:;
@end
