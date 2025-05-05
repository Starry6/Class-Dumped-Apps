@interface LSClaimBinding : NSObject
@property (nonatomic) LSClaimRecord claimRecord;
@property (nonatomic) UTTypeRecord typeRecord;
@property (nonatomic) LSBundleRecord bundleRecord;
- (void)detach;
- (id)init;
- (id)initWithCoder:;
- (id)initWithConfiguration:error:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithURL:error:;
- (id)copyWithZone:;
- (id)initWithTypeIdentifier:error:;
- (id)_initWithClaimRecord:typeRecord:bundleRecord:;
- (id)_initWithContext:binding:coreTypesBundleRecord:typeRecord:error:;
- (id)_initWithBindingEvaluator:error:;
- (id)claimRecord;
- (id)typeRecord;
- (id)bundleRecord;
+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)claimBindingsWithTypeIdentifier:error:;
+ (id)claimBindingsWithURL:error:;
+ (id)_claimBindingsForBindingEvaluator:error:;
+ (id)claimBindingsWithConfiguration:error:;
@end
