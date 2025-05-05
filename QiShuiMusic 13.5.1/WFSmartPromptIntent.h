@interface WFSmartPromptIntent : INIntent
@property (nonatomic) NSString promptMessage;
@property (nonatomic) NSArray buttons;
@property (nonatomic) WFSmartPromptButton selectedButton;
@property (nonatomic) NSString privacyTitle;
@property (nonatomic) INFile privacyIcon;
@end
