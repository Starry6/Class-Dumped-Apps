@interface AWELiteLuckyDogConvertedPopup : NSObject
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @ popup;
@property (nonatomic) NSString identifier;
@property (nonatomic) q priority;
@property (nonatomic) @? popupShowDialogHandler;
@property (nonatomic) BOOL popupShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showWithCloseCallback:;
- (void)onAlertCanceled;
- (BOOL)popupShown;
- (void)setPopupShown:;
- (id)popupShowDialogHandler;
- (id)initWithPopup:priority:showDialogHandler:;
- (void)setPopupShowDialogHandler:;
- (void)enqueue;
- (void)setIdentifier:;
- (long long)priority;
- (id)identifier;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
