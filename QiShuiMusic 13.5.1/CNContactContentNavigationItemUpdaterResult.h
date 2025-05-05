@interface CNContactContentNavigationItemUpdaterResult : NSObject
@property (nonatomic) BOOL enableEditShortcut;
@property (nonatomic) BOOL enableCancelShortcut;
@property (nonatomic) BOOL enableSaveShortcut;
- (BOOL)enableEditShortcut;
- (void)setEnableEditShortcut:;
- (BOOL)enableCancelShortcut;
- (void)setEnableCancelShortcut:;
- (BOOL)enableSaveShortcut;
- (void)setEnableSaveShortcut:;
@end
