@interface GEOPlaceRibbonItem : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSInteger type;
@property (nonatomic) GEOFactoidRibbonItem factoidItem;
@property (nonatomic) GEOAmenityRibbonItem amenityItem;
- (int)type;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)initAmenityWithAmenityItem:;
- (id)initWithFactoidRibbonItem:;
- (id)amenityItem;
- (id)factoidItem;
@end
