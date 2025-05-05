@interface CKFileOpenResult : NSObject
@property (nonatomic) ^{_mkbbackupref=} handle;
@property (nonatomic) NSFileHandle fileHandle;
@property (nonatomic) NSFileHandle encryptedFileHandle;
@property (nonatomic) NSNumber fileSize;
- (id)fileSize;
- (void)setFileHandle:;
- (id)fileHandle;
- (void)dealloc;
- (id)handle;
- (void)setHandle:;
- (id)initWithMobileKeyBagHandle:path:error:;
- (id)initWithCoder:;
- (void)setEncryptedFileHandle:;
- (id)encryptedFileHandle;
- (void)encodeWithCoder:;
- (void)setFileSize:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
