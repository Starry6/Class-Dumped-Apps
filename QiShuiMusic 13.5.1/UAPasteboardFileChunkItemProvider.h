@interface UAPasteboardFileChunkItemProvider : NSObject
@property (nonatomic) NSFileHandle dataFile;
@property (nonatomic) NSNumber offsetInFile;
@property (nonatomic) q chunkSize;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)offsetInFile;
- (id)uuid;
- (void)setType:;
- (void)setUuid:;
- (id)type;
- (void).cxx_destruct;
- (long long)chunkSize;
- (void)setChunkSize:;
- (void)getDataWithCompletionBlock:;
- (id)initWithType:fileHandle:offsetInFile:size:;
- (id)dataFile;
- (void)setDataFile:;
- (void)setOffsetInFile:;
@end
