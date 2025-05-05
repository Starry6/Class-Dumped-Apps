@interface AMapRailwayStation : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSString adcode;
@property (nonatomic) NSString time;
@property (nonatomic) q wait;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL isEnd;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)adcode;
- (void)setAdcode:;
- (BOOL)isEnd;
- (void)setIsEnd:;
- (void)setTime:;
- (void)setName:;
- (id)time;
- (id)uid;
- (void)setUid:;
- (void)setIsStart:;
- (id)location;
- (BOOL)isStart;
- (long long)wait;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
- (void)setWait:;
+ (id)ajo_mapping;
@end
