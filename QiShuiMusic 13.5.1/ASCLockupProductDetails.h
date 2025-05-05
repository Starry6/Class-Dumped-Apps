@interface ASCLockupProductDetails : NSObject
@property (nonatomic) ASCLockup lockup;
@property (nonatomic) NSString storeSheetHostBundleID;
@property (nonatomic) NSString storeSheetUsageContext;
@property (nonatomic) NSDictionary parameters;
- (unsigned long long)hash;
- (id)parameters;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)lockup;
- (void)presentFromViewController:animated:completion:;
- (id)storeSheetHostBundleID;
- (id)storeSheetUsageContext;
- (void)present:;
- (id)initWithLockup:storeSheetHostBundleID:storeSheetUsageContext:;
- (id)initWithLockup:;
- (id)initWithLockup:storeSheetHostBundleID:storeSheetUsageContext:parameters:;
+ (id)URLForLockupID:ofKind:withOfferFlags:;
+ (id)URLForLockupID:ofKind:offerFlags:queryParameters:;
+ (id)queryParametersForLockup:;
@end
