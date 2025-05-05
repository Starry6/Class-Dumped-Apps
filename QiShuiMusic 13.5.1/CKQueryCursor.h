@interface CKQueryCursor : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) CKRecordZoneID zoneID;
- (id)init;
- (id)data;
- (id)zoneID;
- (void)setZoneID:;
- (id)initWithCoder:;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (id)initWithData:zoneID:;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
