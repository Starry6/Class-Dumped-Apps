@interface AWEFeedAlbumExpandTrackInfo : NSObject
@property (nonatomic) BOOL canExpand;
@property (nonatomic) BOOL everSpread;
@property (nonatomic) BOOL everFold;
- (BOOL)everSpread;
- (BOOL)everFold;
- (void)setEverFold:;
- (void)setEverSpread:;
- (void)reset;
- (BOOL)canExpand;
- (void)setCanExpand:;
@end
