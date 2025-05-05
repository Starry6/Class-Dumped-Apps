@interface BDACSResourceManager : NSObject
@property (nonatomic) BDACSConfigModel config;
@property (nonatomic) NSString webURLString;
@property (nonatomic) NSString directoryPath;
@property (nonatomic) <BDACSResourceManagerDelegate> delegate;
- (id)dataWithFilename:;
- (id)initWithConfig:webURLString:delegate:;
- (BOOL)removeFileItem:processorType:;
- (void)setShouldUpload:;
- (id)webURLString;
- (BOOL)writeData:asFilename:;
- (BOOL)writeString:asFilename:;
- (id)directoryPath;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
@end
