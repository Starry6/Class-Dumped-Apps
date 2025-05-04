@interface AWENearbyCityAndContext : NSObject
@property (nonatomic) AWECityModel city;
@property (nonatomic) BOOL isLocated;
@property (nonatomic) NSDictionary context;
- (BOOL)isLocated;
- (void)setIsLocated:;
- (id)initWithCity:isLocated:context:;
- (id)city;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setCity:;
- (id)context;
@end
