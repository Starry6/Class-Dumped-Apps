@interface IESLiveCacheItem : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) @? reportBlock;
@property (nonatomic) @? cleanBlock;
- (void)setReportBlock:;
- (id)cleanBlock;
- (id)reportBlock;
- (void)setCleanBlock:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
+ (id)itemWithIdentifier:reportBlock:cleanBlock:;
@end
