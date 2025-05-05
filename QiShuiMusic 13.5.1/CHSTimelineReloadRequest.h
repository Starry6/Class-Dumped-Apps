@interface CHSTimelineReloadRequest : NSObject
@property (nonatomic) NSString kind;
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) NSString reason;
@property (nonatomic) BOOL allowCostOverride;
- (id)init;
- (id)extensionBundleIdentifier;
- (id)kind;
- (id)reason;
- (id)initWithKind:extensionBundleIdentifier:reason:allowCostOverride:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)allowCostOverride;
- (id)copyWithZone:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
