@interface UIDocumentAlertPresenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)alertView:clickedButtonAtIndex:;
- (void)alertViewCancel:;
- (id)initWithError:completionHandler:;
- (void)_forceFinishNow;
+ (id)_presentAlertWithError:completionHandler:;
@end
