@interface DESUploadTransport : NSObject
@property (nonatomic) BOOL originRoute;
@property (nonatomic) BOOL parsecRoute;
@property (nonatomic) BOOL dediscoRoute;
@property (nonatomic) NSURL postBackBaseURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithPolicy:recipe:;
- (id)initWithDediscoRoute:originRoute:parsecRoute:postBackBaseURL:;
- (BOOL)originRoute;
- (BOOL)parsecRoute;
- (BOOL)dediscoRoute;
- (id)postBackBaseURL;
+ (BOOL)supportsSecureCoding;
@end
