@interface PSCloudStorageOffersManager : NSObject
@property (nonatomic) <PSCloudStorageOffersManagerDelegate> delegate;
@property (nonatomic) Q requiredStorageThreshold;
@property (nonatomic) BOOL shouldOfferFamilySharePlansOnly;
@property (nonatomic) BOOL shouldOfferDeviceOffers;
@property (nonatomic) BOOL skipRetryWithoutToken;
@property (nonatomic) BOOL skipCompletionAlert;
@property (nonatomic) BOOL supportsModernAlerts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (void)cancelLoad;
- (id)delegate;
- (void).cxx_destruct;
- (void)commerceDelegate:willPresentObjectModel:page:;
- (void)commerceDelegate:loadDidFailWithError:;
- (void)commerceDelegateDidCancel:;
- (void)commerceDelegate:didCompleteWithError:;
- (void)_setupFlowWithNavigationController:modally:;
- (void)beginFlowWithNavigationController:modally:;
- (void)beginFlowWithNavigationController:purchaseToken:buyParameters:requestHeaders:modally:;
- (unsigned long long)requiredStorageThreshold;
- (void)setRequiredStorageThreshold:;
- (BOOL)shouldOfferFamilySharePlansOnly;
- (void)setShouldOfferFamilySharePlansOnly:;
- (BOOL)shouldOfferDeviceOffers;
- (void)setShouldOfferDeviceOffers:;
- (BOOL)skipRetryWithoutToken;
- (void)setSkipRetryWithoutToken:;
- (BOOL)skipCompletionAlert;
- (void)setSkipCompletionAlert:;
- (BOOL)supportsModernAlerts;
- (void)setSupportsModernAlerts:;
@end
