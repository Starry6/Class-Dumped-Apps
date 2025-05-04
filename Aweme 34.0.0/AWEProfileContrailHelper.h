@interface AWEProfileContrailHelper : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL isContrailFullScreen;
- (BOOL)isContrailFullScreen;
- (BOOL)getVal_isContrailFullScreen;
- (void)setIsContrailFullScreen:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
+ (void)trackShowUpstairShopWithUser:entranceLocation:headerTrackerParams:;
+ (void)enterUpstairShopWithUser:animated:entranceLocation:headerTrackerParams:;
+ (void)trackEnterUpstairShopWithUser:enterMethod:;
+ (id)eCommerceTrackParamsWithEntranceLocation:headerTrackerParams:;
+ (BOOL)enableUpstairShop:;
+ (double)enterUpstairShopOffset;
@end
