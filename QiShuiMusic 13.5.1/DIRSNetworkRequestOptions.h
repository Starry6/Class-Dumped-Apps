@interface DIRSNetworkRequestOptions : NSObject
@property (nonatomic) Q attempts;
@property (nonatomic) double timeout;
@property (nonatomic) NSArray compressors;
@property (nonatomic) <IRISDataCoder> encryptor;
@property (nonatomic) <IRISDataCoder> decryptor;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCompressors:;
- (id)compressors;
- (void)setDecryptor:;
- (id)userInfo;
- (void)setTimeout:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (double)timeout;
- (unsigned long long)attempts;
- (void)setAttempts:;
- (id)encryptor;
- (void)setEncryptor:;
- (id)decryptor;
@end
