@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider
@property (nonatomic) PNRPhoneNumberResolver phoneNumberResolver;
- (id)locationForMetadataIdentifier:;
- (id)init;
- (void)updateCacheWithDestinationIDs:withGroup:;
- (void).cxx_destruct;
- (id)phoneNumberResolver;
@end
