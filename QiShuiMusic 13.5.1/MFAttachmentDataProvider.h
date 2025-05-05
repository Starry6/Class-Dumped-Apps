@interface MFAttachmentDataProvider : NSObject
@property (nonatomic) NSURL url;
- (id)_path;
- (id)url;
- (id)initWithURL:;
- (BOOL)exists;
- (id)data;
- (BOOL)save:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)errorWithMessage:code:;
- (BOOL)_isFileURL;
- (id)_fileAttributes:;
+ (id)dataProviderWithURL:;
+ (id)dataProviderWithPath:;
@end
