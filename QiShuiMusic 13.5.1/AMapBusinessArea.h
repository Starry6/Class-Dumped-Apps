@interface AMapBusinessArea : AMapSearchObject
@property (nonatomic) NSString name;
@property (nonatomic) AMapGeoPoint location;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)init;
- (void)setName:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
+ (id)ajo_mapping;
@end
