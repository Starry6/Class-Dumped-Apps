@interface IMOrderingTools : NSObject
@property (nonatomic) NSString jsonFilePath;
@property (nonatomic) NSMutableArray jsonArray;
- (void).cxx_destruct;
- (void)printChangeInItemsToJSON:;
- (void)startTrackingChat:;
- (id)pathToDirectoryOfJSONFile;
- (void)setUpJSONFileForChatGUID:;
- (void)printChangeInItemsToJSONFromChat:;
- (id)currentJsonArray;
- (void)writeDataToJSONFile:;
- (id)messageDictionariesFromItemsInChat:withEventKey:;
- (id)jsonFilePath;
- (void)setJsonFilePath:;
- (id)jsonArray;
- (void)setJsonArray:;
@end
