@interface ASDJobOptions : NSObject
@property (nonatomic) NSXPCConnection endpoint;
@property (nonatomic) ASDJobManifest manifest;
- (void)setEndpoint:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)manifest;
- (void)setManifest:;
+ (BOOL)supportsSecureCoding;
@end
