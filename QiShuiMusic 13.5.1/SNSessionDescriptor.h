@interface SNSessionDescriptor : NSObject
@property (nonatomic) NSString platterTargetBundleIdentifier;
@property (nonatomic) NSString sessionIdentifier;
- (id)sessionIdentifier;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:platterTargetBundleIdentifier:;
- (id)platterTargetBundleIdentifier;
@end
