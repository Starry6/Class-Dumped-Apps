@interface ENSignatureFile : NSObject
@property (nonatomic) NSArray signatures;
- (id)signatures;
- (BOOL)closeAndReturnError:;
- (void).cxx_destruct;
- (BOOL)writeAndReturnError:;
- (void)setSignatures:;
- (BOOL)openWithFileSystemRepresentation:reading:error:;
- (BOOL)openForWritingToData:error:;
+ (id)signatureFileWithArchive:error:;
+ (id)signatureFileWithBytes:length:error:;
+ (id)_signatureFileWithProtobufCoder:error:;
@end
