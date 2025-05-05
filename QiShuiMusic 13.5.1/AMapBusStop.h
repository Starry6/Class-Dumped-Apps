@interface AMapBusStop : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString adcode;
@property (nonatomic) NSString name;
@property (nonatomic) NSString citycode;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSArray buslines;
@property (nonatomic) NSString sequence;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)adcode;
- (id)buslines;
- (id)citycode;
- (void)setAdcode:;
- (void)setBuslines:;
- (void)setCitycode:;
- (id)init;
- (void)setName:;
- (void)setSequence:;
- (id)uid;
- (void)setUid:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
- (id)sequence;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
