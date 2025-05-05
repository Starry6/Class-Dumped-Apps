@interface EKPredictedLocationOfInterest : NSObject
@property (nonatomic) RTPredictedLocationOfInterest rtPredictedLocationOfInterest;
@property (nonatomic) q type;
@property (nonatomic) NSString customLabel;
@property (nonatomic) NSString mapItemName;
@property (nonatomic) NSString addressCountryCode;
@property (nonatomic) NSString addressThoroughfare;
@property (nonatomic) NSString addressLocality;
- (id)customLabel;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithPredictedLocationOfInterest:;
- (id)initWithType:customLabel:mapItemName:addressCountryCode:addressThoroughFare:addressLocality:;
- (id)mapItemName;
- (id)addressCountryCode;
- (id)addressThoroughfare;
- (id)addressLocality;
- (id)rtPredictedLocationOfInterest;
@end
