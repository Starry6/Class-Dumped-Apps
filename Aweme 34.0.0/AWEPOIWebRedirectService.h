@interface AWEPOIWebRedirectService : NSObject
@property (nonatomic) NSArray scanRedirectList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (id)scanRedirectList;
- (BOOL)needRedirectSchema:;
- (void)redirectRouterWithSchema:;
- (void)showAlertWithModel:;
- (BOOL)isOfflineScanJumpToUserProfileWithSchema:backupSchema:;
- (void)trackEnterPersonalDetailWithSchema:;
- (id)getQueryItems:withKey:;
- (void)setScanRedirectList:;
- (void).cxx_destruct;
@end
