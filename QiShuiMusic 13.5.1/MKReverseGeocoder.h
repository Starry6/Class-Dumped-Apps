@interface MKReverseGeocoder : NSObject
@property (nonatomic) <MKReverseGeocoderDelegate> delegate;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) MKPlacemark placemark;
@property (nonatomic) BOOL querying;
- (id)initWithCoordinate:;
- (void)cancel;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (void)_notifyError:;
- (void)_notifyResult:;
- (void).cxx_destruct;
- (id)coordinate;
- (void)setCoordinate:;
- (id)placemark;
- (BOOL)isQuerying;
- (void)_notifyNoResults;
@end
