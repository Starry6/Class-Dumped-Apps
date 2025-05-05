@interface GEOPlaceRibbonConfiguration : NSObject
@property (nonatomic) NSArray ribbonItems;
- (void).cxx_destruct;
- (id)initWithRibbonConfiguration:;
- (void)_buildRibbonItems;
- (void)_addFactoidEntriesForRibbonItem:toArray:;
- (void)_addRegularRibbonEntryForType:toArray:;
- (void)_addAmenityEntryForRibbonItem:toArray:;
- (id)ribbonItems;
@end
