@interface AWETeenModeEnableObserver : NSObject
@property (nonatomic) @? dismissBackupPopup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (void)setDismissBackupPopup:;
- (id)dismissBackupPopup;
- (void)registDismissBlock:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
