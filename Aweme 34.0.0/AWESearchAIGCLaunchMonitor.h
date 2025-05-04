@interface AWESearchAIGCLaunchMonitor : NSObject
@property (nonatomic) double startTS;
@property (nonatomic) double initPageTS;
@property (nonatomic) double insertDefaultCardTS;
@property (nonatomic) double endTS;
@property (nonatomic) double allCardsAttachScreenTS;
@property (nonatomic) BOOL useLocalHistory;
@property (nonatomic) BOOL hasSearchKeyword;
- (void)setStartTS:;
- (double)startTS;
- (void)setUseLocalHistory:;
- (double)endTS;
- (void)setEndTS:;
- (double)initPageTS;
- (double)insertDefaultCardTS;
- (double)allCardsAttachScreenTS;
- (BOOL)hasSearchKeyword;
- (BOOL)useLocalHistory;
- (void)sendTrackWithParams:;
- (void)setInitPageTS:;
- (void)setInsertDefaultCardTS:;
- (void)setAllCardsAttachScreenTS:;
- (void)setHasSearchKeyword:;
@end
