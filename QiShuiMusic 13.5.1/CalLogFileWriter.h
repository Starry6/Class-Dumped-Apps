@interface CalLogFileWriter : CalLogWriter
@property (nonatomic) NSString path;
@property (nonatomic) NSInteger fileDescriptor;
@property (nonatomic) BOOL fileDescriptorIsValid;
- (id)path;
- (int)fileDescriptor;
- (void)write:;
- (void)dealloc;
- (void)setFileDescriptor:;
- (id)initWithParameters:;
- (void)setPath:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)fileDescriptorIsValid;
- (void)setFileDescriptorIsValid:;
@end
