@interface SFHighlightActivityNotificationViewController : UIViewController
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString messageText;
- (id)titleText;
- (id)initWithContact:;
- (id)contact;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)messageText;
- (void)setMessageText:;
- (id)initWithTitleText:;
@end
