@interface AWEGPSResultResponseModel : MTLModel
@property (nonatomic) AWELocationDetailResponseModel location;
@property (nonatomic) NSString cityName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)cityName;
- (void)setCityName:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)locationJSONTransformer;
@end
