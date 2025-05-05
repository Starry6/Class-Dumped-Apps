@interface BDXBridgeUploadFormData : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSData fileData;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString mimeType;
- (id)initWithPath:key:;
- (id)filePath;
- (id)fileName;
- (id)key;
- (void)setFilePath:;
- (void)setKey:;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setFileName:;
- (void)setMimeType:;
- (id)fileData;
- (void)setFileData:;
+ (id)formDataWithPath:key:;
@end
