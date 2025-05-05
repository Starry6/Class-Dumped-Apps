@interface IMMessageDirectoryContents : NSObject
@property (nonatomic) NSArray directoryContents;
@property (nonatomic) IMDirectoryContents messagesDirectoryContents;
@property (nonatomic) IMDirectoryContents metaDataDirectoryContents;
@property (nonatomic) IMCombinedDirectoryContents allDirectoryContents;
@property (nonatomic) BOOL needsGathering;
- (id)init;
- (void).cxx_destruct;
- (id)messagesDirectoryContents;
- (id)allDirectoryContents;
- (BOOL)gatherIfNeeded;
- (void)gather;
- (id)metaDataDirectoryContents;
- (BOOL)needsGathering;
- (void)setNeedsGathering:;
- (id)directoryContents;
@end
