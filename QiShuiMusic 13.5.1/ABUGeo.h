@interface ABUGeo : NSObject
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber longitude;
@property (nonatomic) BOOL valid;
- (id)csj_dictionaryValue;
- (id)initWithDictionaryValue:;
- (id)latitude;
- (void)setLatitude:;
- (BOOL)isValid;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)longitude;
@end
