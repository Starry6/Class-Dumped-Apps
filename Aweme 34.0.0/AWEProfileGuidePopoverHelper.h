@interface AWEProfileGuidePopoverHelper : NSObject
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? onClose;
@property (nonatomic) BOOL isOnCloseInvoked;
@property (nonatomic) <AWEProfileGuidePopoverHelperDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)popoverDidDisappear:;
- (void)configDelegate:;
- (void)launchPopoverWithOnClose:;
- (void)invokeOnClose:;
- (void)showPopoverWithAlertClass:actionBlock:;
- (BOOL)isOnCloseInvoked;
- (void)setIsOnCloseInvoked:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)onClose;
- (void)setOnClose:;
@end
