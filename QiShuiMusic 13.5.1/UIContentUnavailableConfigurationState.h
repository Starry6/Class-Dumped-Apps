@interface UIContentUnavailableConfigurationState : NSObject
@property (nonatomic) Q _mutations;
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) NSString searchControllerText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)_mutations;
- (void)setTraitCollection:;
- (id)searchControllerText;
- (id)traitCollection;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setObject:forKeyedSubscript:;
- (id)customStateForKey:;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)initWithTraitCollection:;
- (id)description;
- (void)setSearchControllerText:;
- (void)setCustomState:forKey:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
