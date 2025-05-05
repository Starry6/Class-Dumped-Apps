@interface INExtensionContextSlotResolutionResult : NSObject
@property (nonatomic) q result;
@property (nonatomic) NSData data;
- (long long)result;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithResult:data:;
+ (BOOL)supportsSecureCoding;
@end
