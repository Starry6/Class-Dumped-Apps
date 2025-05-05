@interface WBBookmarksDatabaseHealthInformation : NSObject
@property (nonatomic) Q topLevelDuplicateBookmarksCount;
@property (nonatomic) Q allDuplicateBookmarksCount;
- (unsigned long long)topLevelDuplicateBookmarksCount;
- (unsigned long long)allDuplicateBookmarksCount;
- (id)initWithTopLevelDuplicateBookmarksCount:allDuplicateBookmarksCount:;
@end
