@interface AWEMusicGuideConfig : NSObject
@property (nonatomic) BOOL showBgGuide;
@property (nonatomic) BOOL showCollectGuide;
@property (nonatomic) BOOL showGotoMyCollectGuide;
@property (nonatomic) BOOL showChangeSongGuideGuide;
@property (nonatomic) NSString key;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setShowBgGuide:;
- (void)setShowCollectGuide:;
- (void)setShowGotoMyCollectGuide:;
- (void)setShowChangeSongGuideGuide:;
- (BOOL)showBgGuide;
- (BOOL)showCollectGuide;
- (BOOL)showGotoMyCollectGuide;
- (BOOL)showChangeSongGuideGuide;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
@end
