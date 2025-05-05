@interface SAUIConfirmationOptions : AceObject
@property (nonatomic) NSArray allConfirmationOptions;
@property (nonatomic) NSString cancelTrigger;
@property (nonatomic) NSArray confirmCommands;
@property (nonatomic) NSString confirmText;
@property (nonatomic) NSArray denyCommands;
@property (nonatomic) NSString denyText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
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
+ (id)confirmationOptions;
+ (id)confirmationOptionsWithDictionary:context:;
@end
