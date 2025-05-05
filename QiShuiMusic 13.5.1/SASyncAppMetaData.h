@interface SASyncAppMetaData : AceObject
@property (nonatomic) SASyncAppIdentifyingInfo appIdentifyingInfo;
@property (nonatomic) NSNumber developerMode;
@property (nonatomic) NSArray syncSlots;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_af_preferredBundleID;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)syncSlots;
- (void)setAppIdentifyingInfo:;
- (id)appIdentifyingInfo;
- (id)developerMode;
- (void)setDeveloperMode:;
- (void)setSyncSlots:;
+ (id)appMetaData;
+ (id)appMetaDataWithDictionary:context:;
@end
