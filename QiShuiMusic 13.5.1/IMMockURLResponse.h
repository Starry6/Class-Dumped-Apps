@interface IMMockURLResponse : NSObject
@property (nonatomic) NSHTTPURLResponse response;
@property (nonatomic) NSData data;
@property (nonatomic) NSString requestBodyKeyPath;
@property (nonatomic) NSString mockID;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)response;
- (void).cxx_destruct;
- (void)setData:;
- (void)setResponse:;
- (id)requestBodyKeyPath;
- (void)setRequestBodyKeyPath:;
- (id)mockID;
- (void)setMockID:;
+ (BOOL)supportsSecureCoding;
+ (id)objectFromPlist:;
@end
