@interface IDSPopupPrompt : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
- (void)setMessage:;
- (void)setTitle:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (id)initWithTitle:promptMessage:;
- (void)launchPromptWithButton:defaultUrl:alternateButton:alternateUrl:;
@end
