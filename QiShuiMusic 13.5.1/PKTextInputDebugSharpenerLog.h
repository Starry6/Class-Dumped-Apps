@interface PKTextInputDebugSharpenerLog : NSObject
@property (nonatomic) NSArray logEntries;
@property (nonatomic) NSDictionary metadataDictionary;
@property (nonatomic) BOOL hasContent;
- (id)metadataDictionary;
- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContentsOfURL:error:;
- (id)initWithLogEntries:;
- (id)_dictionaryRepresentationWithContentLevel:excludeEntyIndexes:;
- (id)writeLogToTemporaryDirectoryWithContentLevel:excludeEntyIndexes:error:;
- (BOOL)writeToURL:withContentLevel:excludeEntyIndexes:error:;
- (BOOL)_loadFromFileURL:error:;
- (id)logEntries;
+ (BOOL)canLoadFromFileAtURL:;
+ (id)_environmentMetadataDictionary;
+ (id)_recommendedFileNameForLogWithDate:;
@end
