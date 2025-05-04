@interface AWEYAPTransferAccountsService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionSheet:didClickButtonAtIndex:;
- (void)actionSheetDidClickCancelButton:;
- (void)actionSheetDidClickMaskArea:;
- (void)openSendTransferPageWithParams:;
- (void)openTransferDetailWithParams:;
- (void)openRouterAdaptPage:;
- (void)beginSendTransferMoneyWithParams:;
@end
