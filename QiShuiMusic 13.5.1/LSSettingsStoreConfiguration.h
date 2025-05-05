@interface LSSettingsStoreConfiguration : NSObject
@property (nonatomic) NSXPCListenerEndpoint endpoint;
- (id)initWithCoder:;
- (id)initWithEndpoint:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)endpoint;
+ (BOOL)supportsSecureCoding;
@end
