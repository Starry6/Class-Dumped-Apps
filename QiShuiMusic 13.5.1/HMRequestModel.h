@interface HMRequestModel : NSObject
@property (nonatomic) NSString requestURL;
@property (nonatomic) NSString method;
@property (nonatomic) NSDictionary headerField;
@property (nonatomic) BOOL needEcrypt;
@property (nonatomic) NSData postData;
- (void)setHeaderField:;
- (id)headerField;
- (BOOL)needEcrypt;
- (void)setNeedEcrypt:;
- (id)requestURL;
- (id)method;
- (void)setRequestURL:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)postData;
- (void)setPostData:;
@end
