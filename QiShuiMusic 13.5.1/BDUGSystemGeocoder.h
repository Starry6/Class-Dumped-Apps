@interface BDUGSystemGeocoder : NSObject
@property (nonatomic) CLGeocoder geocoder;
- (void)onReceivedDidEnterBackgroundNotification:;
- (id)init;
- (void)dealloc;
- (void)reverseGeocodeLocation:completionHandler:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)geocoder;
- (void)setGeocoder:;
+ (id)_placemarkInfoWithCLPlacemark:;
+ (id)sharedGeocoder;
@end
