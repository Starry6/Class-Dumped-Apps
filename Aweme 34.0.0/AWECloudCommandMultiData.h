@interface AWECloudCommandMultiData : NSObject
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSData data;
@property (nonatomic) NSString fileType;
- (id)fileType;
- (id)fileName;
- (id)mimeType;
- (void)setData:;
- (void)setFileType:;
- (void).cxx_destruct;
- (id)data;
- (void)setMimeType:;
- (void)setFileName:;
@end
