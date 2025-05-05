@interface SASyncAppIdentifyingInfo : AceObject
@property (nonatomic) NSString buildNumber;
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setVersion:;
- (id)version;
- (id)bundleId;
- (id)buildNumber;
- (id)encodedClassName;
- (void)setClientIdentifier:;
- (id)clientIdentifier;
- (void)setBundleId:;
- (void)setBuildNumber:;
+ (id)appIdentifyingInfo;
+ (id)appIdentifyingInfoWithDictionary:context:;
@end
