@interface UIContentUnavailableButtonProperties : NSObject
@property (nonatomic) UIButtonConfiguration configuration;
@property (nonatomic) UIAction primaryAction;
@property (nonatomic) UIMenu menu;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (nonatomic) BOOL enabled;
- (void)setMenu:;
- (id)init;
- (BOOL)showsMenuAsPrimaryAction;
- (id)initWithCoder:;
- (void)setConfiguration:;
- (unsigned long long)hash;
- (id)menu;
- (void)setPrimaryAction:;
- (void)encodeWithCoder:;
- (id)configuration;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)primaryAction;
- (void)setShowsMenuAsPrimaryAction:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
+ (BOOL)supportsSecureCoding;
@end
