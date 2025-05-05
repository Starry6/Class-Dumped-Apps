@interface FAFamilyCloudKitProperties : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString participantID;
@property (nonatomic) NSString shareID;
@property (nonatomic) NSString zoneID;
- (id)dictionary;
- (id)shareID;
- (id)zoneID;
- (id)initWithCoder:;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)participantID;
+ (BOOL)supportsSecureCoding;
@end
