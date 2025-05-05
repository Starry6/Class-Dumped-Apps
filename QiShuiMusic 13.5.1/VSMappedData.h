@interface VSMappedData : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) Q totalLength;
@property (nonatomic) ^v mmappedData;
@property (nonatomic) Q mappedLength;
@property (nonatomic) NSMutableData fallbackInMemoryData;
@property (nonatomic) BOOL shouldCleanFile;
- (id)filePath;
- (id)init;
- (void)dealloc;
- (id)appendData:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (void)setTotalLength:;
- (unsigned long long)totalLength;
- (id)initWithFilePath:initialSize:;
- (void)_appendToFallbackMemory:;
- (void)_convertToFallbackMemory;
- (void)_appendToMappedMemory:;
- (id)bytesAtOffset:;
- (id)mmappedData;
- (void)setMmappedData:;
- (unsigned long long)mappedLength;
- (void)setMappedLength:;
- (id)fallbackInMemoryData;
- (void)setFallbackInMemoryData:;
- (BOOL)shouldCleanFile;
- (void)setShouldCleanFile:;
@end
