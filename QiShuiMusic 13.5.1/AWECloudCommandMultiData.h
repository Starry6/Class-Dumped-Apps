@interface AWECloudCommandMultiData : NSObject
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSData data;
@property (nonatomic) NSString fileType;
- (id)fileName;
- (id)data;
- (void)setFileType:;
- (id)fileType;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setData:;
- (void)setFileName:;
- (void)setMimeType:;
@end
