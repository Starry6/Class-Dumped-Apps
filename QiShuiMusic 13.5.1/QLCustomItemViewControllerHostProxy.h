@interface QLCustomItemViewControllerHostProxy : NSObject
@property (nonatomic) <QLCustomItemViewControllerHost> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void)setFullScreen:;
- (void).cxx_destruct;
- (void)dismissQuickLook;
- (void)presentShareSheetWithPopoverTracker:customSharedURL:dismissCompletion:;
- (void)forwardMessageToHostOfCustomViewController:completionHandler:;
@end
