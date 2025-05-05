@interface ICSecureKeyDeliveryResponse : NSObject
@property (nonatomic) ICStoreDialogResponse dialog;
@property (nonatomic) NSError serverError;
@property (nonatomic) Q bulkRefreshWaitInterval;
@property (nonatomic) NSDate rentalExpirationDate;
@property (nonatomic) NSDate rentalPlaybackStartDate;
@property (nonatomic) NSDate renewalDate;
@property (nonatomic) NSData serverPlaybackContextData;
@property (nonatomic) NSData contentKeyContextData;
- (void)setServerError:;
- (id)renewalDate;
- (id)serverError;
- (void)setRenewalDate:;
- (void).cxx_destruct;
- (id)description;
- (id)dialog;
- (void)setDialog:;
- (void)finishAssetResourceLoadingRequest:withError:;
- (unsigned long long)bulkRefreshWaitInterval;
- (void)setBulkRefreshWaitInterval:;
- (id)rentalExpirationDate;
- (void)setRentalExpirationDate:;
- (id)rentalPlaybackStartDate;
- (void)setRentalPlaybackStartDate:;
- (id)serverPlaybackContextData;
- (void)setServerPlaybackContextData:;
- (id)contentKeyContextData;
- (void)setContentKeyContextData:;
@end
