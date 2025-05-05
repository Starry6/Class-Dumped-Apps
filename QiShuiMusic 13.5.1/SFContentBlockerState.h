@interface SFContentBlockerState : NSObject
@property (nonatomic) BOOL enabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setEnabled:;
- (BOOL)isEnabled;
- (id)initWithEnabledState:;
+ (BOOL)supportsSecureCoding;
@end
