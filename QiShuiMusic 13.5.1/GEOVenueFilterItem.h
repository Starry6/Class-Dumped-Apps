@interface GEOVenueFilterItem : NSObject
@property (nonatomic) <GEOVenueIdentifier> filterID;
@property (nonatomic) <GEOVenueLabel> label;
@property (nonatomic) BOOL describesParentVenue;
- (id)init;
- (id)label;
- (void).cxx_destruct;
- (id)filterID;
- (BOOL)describesParentVenue;
- (id)initWithLabel:filterID:;
- (id)initWithFilterElementInfo:;
@end
