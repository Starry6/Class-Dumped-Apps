@interface DNDAppActionsBox : NSObject
@property (nonatomic) NSDictionary appActionsForModeIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)appConfigurationActionsForModeIdentifier;
- (id)appActionsForModeIdentifier;
- (void)setAppActionsForModeIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
