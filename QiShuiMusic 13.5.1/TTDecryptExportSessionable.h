@interface TTDecryptExportSessionable : MediaDecrypter
@property (nonatomic) NSError error;
@property (nonatomic) double progress;
@property (nonatomic) NSURL outputURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)start:;
- (void)setError:;
- (id)error;
- (void)setOutputURL:;
- (double)progress;
- (id)outputURL;
- (void).cxx_destruct;
@end
