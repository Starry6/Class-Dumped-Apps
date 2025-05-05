@interface CKDirectoryPurger : NSObject
@property (nonatomic) NSArray urls;
@property (nonatomic) @? shouldSkipFileBlock;
@property (nonatomic) @? shouldRemoveFileBlock;
- (void)purge;
- (void)setShouldSkipFileBlock:;
- (id)urls;
- (void)setShouldRemoveFileBlock:;
- (void)setUrls:;
- (id)shouldRemoveFileBlock;
- (void).cxx_destruct;
- (id)initWithDirectoryURLs:;
- (id)shouldSkipFileBlock;
+ (void)purgeDirectoryAtURL:;
@end
