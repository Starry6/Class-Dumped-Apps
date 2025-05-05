@interface EFFileWrapper : NSFileWrapper
@property (nonatomic) EFPathComponent preferredFilenamePathComponent;
@property (nonatomic) EFPathComponent filenamePathComponent;
- (id)filename;
- (id)init;
- (id)initWithSerializedRepresentation:;
- (void)setFilename:;
- (id)initWithURL:options:error:;
- (void).cxx_destruct;
- (id)initDirectoryWithFileWrappers:;
- (id)initRegularFileWithContents:;
- (void)setPreferredFilename:;
- (id)preferredFilename;
- (void)setPreferredFilenamePathComponent:;
- (void)setFilenamePathComponent:;
- (id)preferredFilenamePathComponent;
- (id)filenamePathComponent;
@end
