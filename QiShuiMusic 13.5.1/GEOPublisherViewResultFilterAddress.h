@interface GEOPublisherViewResultFilterAddress : NSObject
@property (nonatomic) GEOMapItemIdentifier filterAddressIdentifier;
@property (nonatomic) NSString displayString;
@property (nonatomic) GEOPDPublisherViewResultFilterAddress addressIdentifier;
- (id)displayString;
- (void).cxx_destruct;
- (id)addressIdentifier;
- (id)initWithFilterAddressIdentifier:withPlaces:;
- (id)filterAddressIdentifier;
@end
