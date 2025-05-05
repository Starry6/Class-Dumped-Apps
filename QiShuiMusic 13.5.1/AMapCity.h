@interface AMapCity : AMapSearchObject
@property (nonatomic) NSString city;
@property (nonatomic) NSString citycode;
@property (nonatomic) NSString adcode;
@property (nonatomic) q num;
@property (nonatomic) NSArray districts;
- (id)adcode;
- (id)citycode;
- (id)districts;
- (void)setAdcode:;
- (void)setCitycode:;
- (void)setDistricts:;
- (id)city;
- (id)init;
- (void).cxx_destruct;
- (void)setCity:;
- (void)setNum:;
- (long long)num;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
