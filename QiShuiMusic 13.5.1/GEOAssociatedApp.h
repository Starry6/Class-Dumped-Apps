@interface GEOAssociatedApp : NSObject
@property (nonatomic) GEOPDAssociatedApp geoAssociatedApp;
@property (nonatomic) BOOL hasPreferredAppAdamId;
@property (nonatomic) NSString preferredAppAdamId;
@property (nonatomic) NSArray alternateAppAdamIds;
- (void).cxx_destruct;
- (id)initWithGEOPDAssociatedApp:;
- (BOOL)hasPreferredAppAdamId;
- (id)preferredAppAdamId;
- (id)alternateAppAdamIds;
- (id)geoAssociatedApp;
- (void)setGeoAssociatedApp:;
@end
