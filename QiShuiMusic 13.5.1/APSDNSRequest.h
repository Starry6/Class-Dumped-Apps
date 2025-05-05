@interface APSDNSRequest : NSObject
@property (nonatomic) NSString hostname;
@property (nonatomic) double timeout;
@property (nonatomic) @? responseBlock;
@property (nonatomic) NSString environment;
@property (nonatomic) NSDate requestStartTime;
- (id)hostname;
- (id)requestStartTime;
- (void)setEnvironment:;
- (id)initWithCoder:;
- (id)environment;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timeout;
- (void)setRequestStartTime:;
- (id)initWithHostname:timeoutInSeconds:requestFlags:responseBlock:;
- (id)responseBlock;
+ (BOOL)supportsSecureCoding;
@end
