@interface MediaDecrypter : NSObject
@property (nonatomic) NSString inputPath;
@property (nonatomic) NSString outputPath;
@property (nonatomic) NSString decryptionKey;
@property (nonatomic) NSString encryptionKey;
@property (nonatomic) q progress;
@property (nonatomic) BOOL isRemux;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) @? completionBlock;
- (BOOL)isRemux;
- (void)handleNotify:;
- (id)initWithInputPath2:outputPath:encryptionKey:;
- (id)initWithInputPath:;
- (id)initWithInputPath:outputPath:decryptionKey:;
- (id)inputPath;
- (void)setInputPath:;
- (void)setIsRemux:;
- (void)setDecryptionKey:;
- (void)setEncryptionKey:;
- (void)start:;
- (void)dealloc;
- (void)setProgress:;
- (void)setCompletionBlock:;
- (void)close;
- (long long)progress;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)completionBlock;
- (void)create;
- (id)decryptionKey;
- (id)encryptionKey;
- (void)setIsFinished:;
- (id)outputPath;
- (void)setOutputPath:;
- (id)getMetadata;
@end
