@interface GEOVenueSearchFilter : NSObject
@property (nonatomic) <GEOVenueIdentifier> identifier;
- (id)init;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)applyToSearchParameters:error:;
- (id)initWithIdentifier:;
@end
