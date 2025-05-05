@interface GEOFactoid : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) double value;
@property (nonatomic) NSString unstructuredValue;
@property (nonatomic) NSInteger semantic;
@property (nonatomic) NSInteger unitType;
@property (nonatomic) BOOL useStructuredData;
@property (nonatomic) NSString symbolName;
@property (nonatomic) GEOMapItemIdentifier placeIdentifier;
@property (nonatomic) BOOL canBeDisplayedInPlaceSummary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)symbolName;
- (int)semantic;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (double)value;
- (id)unstructuredValue;
- (int)unitType;
- (BOOL)shouldUseStructuredData;
- (id)placeIdentifier;
- (BOOL)canBeDisplayedInPlaceSummary;
- (id)initWithFactoid:;
@end
