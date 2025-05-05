@interface CKMergeableValueIDProxy : CKXStructProxyBase
@property (nonatomic) Q size;
- (id)zoneName;
- (id)identifier;
- (unsigned long long)size;
- (id)mergeableValueID;
- (id)zoneOwnerName;
- (unsigned long long)identifierSize;
- (void)copyIdentifierBytes:length:isNull:;
- (unsigned long long)zoneNameSize;
- (void)copyZoneNameBytes:length:isNull:;
- (unsigned long long)zoneOwnerNameSize;
- (void)copyZoneOwnerNameBytes:length:isNull:;
@end
