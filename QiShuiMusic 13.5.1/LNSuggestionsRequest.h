@interface LNSuggestionsRequest : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL onScreen;
@property (nonatomic) BOOL explicitRequest;
- (BOOL)isOnScreen;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithBundleIdentifier:onScreen:explicitRequest:;
- (BOOL)isExplicitRequest;
+ (BOOL)supportsSecureCoding;
@end
