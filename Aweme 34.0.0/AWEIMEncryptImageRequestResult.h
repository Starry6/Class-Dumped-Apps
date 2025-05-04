@interface AWEIMEncryptImageRequestResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) UIImage image;
@property (nonatomic) NSError error;
- (BOOL)fromCache;
- (void)setFromCache:;
- (id)image;
- (void)setImage:;
- (void)setError:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (id)error;
- (BOOL)success;
@end
