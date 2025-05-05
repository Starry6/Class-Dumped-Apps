@interface CNMockFavoritesLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)writingFavorites:;
- (void)failedToWriteFavoritesToPath:error:simulateCrashReport:;
- (void)failedToWriteRemoteFavorites:;
- (void)failedToReadRemoteFavorites:;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)failedToReadFavoritesFromPath:error:simulateCrashReport:;
- (void)rematchingFavorites:;
- (void)failedToVerifyFavorites:withPropertyListFavorites:error:;
- (void)finishedReadingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:entriesCount:;
- (void)readingFavorites:;
- (void)finishedWritingFavoritesToPath:entriesCount:;
- (void)failedToConvertFavoritesToPropertyList:;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:;
- (void)finishedWritingRemoteFavorites;
@end
