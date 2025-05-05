@interface PFUbiquityBaselineMetadata : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithLocalPeerID:storeName:modelVersionHash:andUbiquityRootLocation:;
- (id)createPeerRangeDictionary:;
- (void)addDictionaryForPeerRange:;
- (id)createNewLocalRangeWithRangeStart:andRangeEnd:forEntityNamed:;
+ (BOOL)supportsSecureCoding;
@end
