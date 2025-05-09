@interface NWNetworkOfInterest : NSObject
@property (nonatomic) q version;
@property (nonatomic) q scopedToLOI;
@property (nonatomic) q flags;
@property (nonatomic) C interfaceType;
@property (nonatomic) BOOL isTrafficEligible;
@property (nonatomic) BOOL willGetDiscretionaryTrafficInvites;
@property (nonatomic) BOOL discretionaryTrafficInvited;
@property (nonatomic) q interfaceClass;
@property (nonatomic) q considerAlternate;
@property (nonatomic) NWNetworkAdviceUpdate considerAlternateUpdate;
@property (nonatomic) q linkQuality;
@property (nonatomic) q powerCostDL;
@property (nonatomic) q powerCostUL;
@property (nonatomic) NSDate predictionsGeneratedAt;
@property (nonatomic) NSArray predictions;
@property (nonatomic) q interface;
@property (nonatomic) q interfaceSubtype;
@property (nonatomic) BOOL isAny;
@property (nonatomic) BOOL isBuiltin;
@property (nonatomic) NSPredicate customSignature;
- (void)setLinkQuality:;
- (long long)linkQuality;
- (long long)interface;
- (unsigned char)interfaceType;
- (void)setPowerCostUL:;
- (long long)version;
- (id)predictions;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setPowerCostDL:;
- (long long)powerCostDL;
- (void).cxx_destruct;
- (long long)powerCostUL;
- (id)description;
- (long long)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPredictions:;
- (id)customSignature;
- (BOOL)isBuiltin;
- (id)initWithSpec:isAny:isBuiltin:scopedToLOI:flags:hasCustomSignature:;
- (id)typePrettyPrint;
- (id)_descriptionFull:;
- (BOOL)atHomeScopedNOI;
- (BOOL)atWorkScopedNOI;
- (BOOL)_isEqualToNOI:;
- (id)identityAttrsOnly;
- (void)addObserverForAllKeyPaths:;
- (void)removeObserverForAllKeyPaths:;
- (long long)interfaceSubtype;
- (BOOL)isAny;
- (BOOL)isTrafficEligible;
- (void)setIsTrafficEligible:;
- (BOOL)willGetDiscretionaryTrafficInvites;
- (void)setWillGetDiscretionaryTrafficInvites:;
- (BOOL)discretionaryTrafficInvited;
- (void)setDiscretionaryTrafficInvited:;
- (long long)interfaceClass;
- (void)setInterfaceClass:;
- (long long)considerAlternate;
- (void)setConsiderAlternate:;
- (id)considerAlternateUpdate;
- (void)setConsiderAlternateUpdate:;
- (id)predictionsGeneratedAt;
- (void)setPredictionsGeneratedAt:;
- (long long)scopedToLOI;
+ (BOOL)supportsSecureCoding;
@end
