@interface AWEDownloadEntranceHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isDownloadAllowedWithContext:;
+ (BOOL)checkDownloadPermissionAfterClickedWithContext:;
+ (void)p_recordControlServerDiffWithMessage:;
+ (BOOL)shouldGrayedDownloadItemInSharePanelWithContext:;
+ (BOOL)shouldHideDownloadItemInSharePanelWithContext:;
+ (void)trackDownloadSecurityCheckWithContext:;
@end
