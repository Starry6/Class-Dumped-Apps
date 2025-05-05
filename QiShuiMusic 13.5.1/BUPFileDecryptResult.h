@interface BUPFileDecryptResult : NSObject
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString path;
@property (nonatomic) NSData data;
- (id)path;
- (id)fileName;
- (id)data;
- (void)setPath:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setFileName:;
@end
