@interface CHSWidgetConfigurationHostsBox : NSObject
@property (nonatomic) NSDictionary configurationsByHost;
- (id)initWithCoder:;
- (id)initWithConfigurationsByHost:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)configurationsByHost;
+ (BOOL)supportsSecureCoding;
@end
