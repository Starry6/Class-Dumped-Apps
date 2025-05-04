@interface AWEOriginalSoundTrackLocalMediaPage : NSObject
@property (nonatomic) NSMutableArray mediaList;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableArray mediaViewModels;
- (id)mediaList;
- (void)setMediaList:;
- (id)mediaViewModels;
- (id)updateWithPage:;
- (void)setMediaViewModels:;
- (long long)cursor;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
