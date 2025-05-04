@interface AWEStudioRawTypePropExposureConvertor : NSObject
@property (nonatomic) double biasValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)actualExposureValueFromOriginValue:;
- (double)originExposureValueFromActualValue:;
- (id)initWithExposureBiasValue:;
- (double)biasValue;
- (void)setBiasValue:;
- (void)updateExposureBiasValue:;
@end
