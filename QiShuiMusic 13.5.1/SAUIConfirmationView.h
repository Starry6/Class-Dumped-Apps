@interface SAUIConfirmationView : SAAceView
@property (nonatomic) NSArray allConfirmationOptions;
@property (nonatomic) NSString cancelTrigger;
@property (nonatomic) NSArray confirmCommands;
@property (nonatomic) NSString confirmText;
@property (nonatomic) NSArray denyCommands;
@property (nonatomic) NSString denyText;
@property (nonatomic) NSString style;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setStyle:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)subtitle;
- (id)style;
- (id)allConfirmationOptions;
- (void)setAllConfirmationOptions:;
- (id)cancelTrigger;
- (void)setCancelTrigger:;
- (id)confirmCommands;
- (void)setConfirmCommands:;
- (id)confirmText;
- (void)setConfirmText:;
- (id)denyCommands;
- (void)setDenyCommands:;
- (id)denyText;
- (void)setDenyText:;
+ (id)confirmationView;
+ (id)confirmationViewWithDictionary:context:;
@end
