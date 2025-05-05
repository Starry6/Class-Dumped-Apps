@interface MSVSystemDialog : NSObject
@property (nonatomic) ^{__CFUserNotification=} presentedUserNotification;
@property (nonatomic) ^{__CFRunLoopSource=} activeRunLoopSource;
@property (nonatomic) @? pendingCompletion;
@property (nonatomic) MSVSystemDialogOptions options;
@property (nonatomic) NSArray textFields;
- (void)dismiss;
- (void)dealloc;
- (id)initWithOptions:;
- (id)options;
- (void)setPendingCompletion:;
- (void).cxx_destruct;
- (id)pendingCompletion;
- (id)textFields;
- (void)presentWithCompletion:;
- (void)addTextField:;
- (id)initWithCFUserNotification:;
- (id)presentedUserNotification;
- (void)setPresentedUserNotification:;
- (id)activeRunLoopSource;
- (void)setActiveRunLoopSource:;
- (void)addTextFieldWithTitle:secure:;
- (void)clearTextFields;
+ (id)systemDialogWithOptions:;
@end
