@interface AMapPOIConfig : NSObject
@property (nonatomic) NSString appScheme;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString keywords;
@property (nonatomic) {CLLocationCoordinate2D=dd} leftTopCoordinate;
@property (nonatomic) {CLLocationCoordinate2D=dd} rightBottomCoordinate;
- (id)appScheme;
- (id)leftTopCoordinate;
- (id)rightBottomCoordinate;
- (void)setAppScheme:;
- (void)setLeftTopCoordinate:;
- (void)setRightBottomCoordinate:;
- (id)keywords;
- (void)setKeywords:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
- (id)description;
@end
