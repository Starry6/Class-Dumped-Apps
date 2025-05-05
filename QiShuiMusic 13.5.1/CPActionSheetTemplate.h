@interface CPActionSheetTemplate : CPTemplate
@property (nonatomic) <CPAlertDelegate> alertDelegate;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) NSArray actions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (id)actions;
- (id)message;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:;
- (id)alertDelegate;
- (void)setAlertDelegate:;
- (void)handleAlertActionForIdentifier:;
- (id)initWithTitle:message:actions:;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:;
- (id)trailingNavigationBarButtons;
+ (BOOL)supportsSecureCoding;
@end
