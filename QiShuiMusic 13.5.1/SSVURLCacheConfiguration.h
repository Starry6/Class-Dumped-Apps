@interface SSVURLCacheConfiguration : NSObject
@property (nonatomic) NSString sessionIdentifier;
@property (nonatomic) BOOL supportsProcessSharing;
- (id)sessionIdentifier;
- (void)setSessionIdentifier:;
- (void).cxx_destruct;
- (BOOL)supportsProcessSharing;
- (void)setSupportsProcessSharing:;
@end
