@interface MADRequest : NSObject
@property (nonatomic) NSArray results;
@property (nonatomic) NSError error;
- (id)vcp_taskWithImageAsset:andSignpostPayload:;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)results;
- (void).cxx_destruct;
- (id)description;
- (void)setResults:;
+ (BOOL)supportsSecureCoding;
@end
