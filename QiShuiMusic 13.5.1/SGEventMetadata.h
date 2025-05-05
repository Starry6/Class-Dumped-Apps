@interface SGEventMetadata : NSObject
@property (nonatomic) C type;
@property (nonatomic) NSString categoryDescription;
@property (nonatomic) NSString originBundleId;
@property (nonatomic) double confidence;
@property (nonatomic) NSArray schemaOrg;
@property (nonatomic) NSArray participants;
@property (nonatomic) NSArray eventActivities;
- (double)confidence;
- (id)participants;
- (id)jsonObject;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)categoryDescription;
- (id)originBundleId;
- (id)initWithType:categoryDescription:originBundleId:confidence:schemaOrg:participants:;
- (id)initWithType:categoryDescription:originBundleId:confidence:schemaOrg:participants:eventActivities:;
- (id)toJsonString;
- (id)schemaOrg;
- (id)eventActivities;
+ (id)describeType:;
+ (unsigned char)eventTypeFromString:;
+ (id)eventMetadataFromEKEvent:;
@end
