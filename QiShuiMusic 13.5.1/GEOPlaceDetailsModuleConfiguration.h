@interface GEOPlaceDetailsModuleConfiguration : NSObject
@property (nonatomic) NSInteger locationStyle;
@property (nonatomic) NSArray factoidReferences;
@property (nonatomic) NSInteger attributionStyle;
- (void).cxx_destruct;
- (id)initWithPlaceInfoModuleConfiguration:;
- (int)locationStyle;
- (id)factoidReferences;
- (int)attributionStyle;
@end
