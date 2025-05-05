@interface AFServiceResponse : NSObject
@property (nonatomic) NSDictionary payloadDict;
@property (nonatomic) Q responseCode;
@property (nonatomic) NSString session;
@property (nonatomic) NSDictionary result;
- (id)payloadFromURL:;
- (id)result;
- (void)setSession:;
- (id)initWithURL:;
- (unsigned long long)responseCode;
- (id)session;
- (void).cxx_destruct;
- (void)setResponseCode:;
- (void)setResult:;
- (id)payloadDict;
- (void)setPayloadDict:;
+ (id)URLErrResponse;
+ (id)openURLErrResponse;
+ (id)repeatCallResponse;
+ (id)serviceErrResponse;
@end
