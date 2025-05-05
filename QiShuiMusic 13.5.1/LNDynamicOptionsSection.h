@interface LNDynamicOptionsSection : NSObject
@property (nonatomic) LNDeferredLocalizedString title;
@property (nonatomic) NSArray options;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithOptions:title:;
+ (BOOL)supportsSecureCoding;
@end
