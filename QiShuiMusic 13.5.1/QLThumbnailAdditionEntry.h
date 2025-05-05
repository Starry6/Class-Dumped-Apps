@interface QLThumbnailAdditionEntry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q documentID;
@property (nonatomic) q size;
@property (nonatomic) NSDate lastHitDate;
@property (nonatomic) NSURL lastSeenURL;
@property (nonatomic) NSData vol_uuid;
@property (nonatomic) NSString unparsedVolumeUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSize:;
- (unsigned long long)documentID;
- (long long)size;
- (void)setDocumentID:;
- (id)initFromPQLResultSet:error:;
- (id)unparsedVolumeUUID;
- (id)lastHitDate;
- (void)setLastHitDate:;
- (id)lastSeenURL;
- (void)setLastSeenURL:;
- (id)vol_uuid;
- (void)setVol_uuid:;
+ (BOOL)supportsSecureCoding;
@end
