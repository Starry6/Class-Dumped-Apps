@interface AWESyncTipsAlertManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)tipsVersion;
+ (id)tipsVersionHasShown;
+ (void)showSyncTipsAlertWithActionBlock:cancelBlock:;
+ (BOOL)shouldShowSyncTipsAlert;
@end
