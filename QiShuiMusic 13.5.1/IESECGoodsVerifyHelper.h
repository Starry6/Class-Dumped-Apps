@interface IESECGoodsVerifyHelper : NSObject
+ (void)checkDisclaimerForNonTouTiaoProductWithConfig:action:cancel:;
+ (void)checkDisclaimerForTouTiaoProductWithConfig:action:cancel:;
+ (void)fetchDisclaimerResult:completion:;
+ (id)locallyStorageKeyWithAppID:;
+ (void)loginIfNeededWithCompletion:;
+ (void)loginIfNeededWithExtraInfo:completion:;
+ (void)loginNCheckDisclaimerWithConfig:confirmBlock:cancelBlock:;
+ (void)loginNCheckDisclaimerWithConfig:confirmBlock:cancleBlock:;
+ (void)popVerifyViewWithResponse:completion:;
+ (void)updateLocallyResult:config:;
+ (void)updateRemoteResultWithConfig:completion:;
+ (void)verifyGoodsManageAuthorityIfNeeded:;
@end
