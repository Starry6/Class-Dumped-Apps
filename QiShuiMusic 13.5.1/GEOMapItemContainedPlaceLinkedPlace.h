@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem
- (id)_styleAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasMUID;
- (int)_resultProviderID;
- (BOOL)_responseStatusIsIncomplete;
- (id)_identifier;
- (BOOL)_isInLinkedPlaceRelationship;
- (unsigned long long)_muid;
- (BOOL)_hasResultProviderID;
- (int)referenceFrame;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)coordinate;
- (id)description;
- (id)name;
- (id)initWithLinkedPlace:;
@end
