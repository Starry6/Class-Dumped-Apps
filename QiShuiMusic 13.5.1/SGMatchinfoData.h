@interface SGMatchinfoData : NSObject
@property (nonatomic) NSNumber entityId;
@property (nonatomic) NSNumber detailEntityId;
@property (nonatomic) NSData matchinfoData;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)entityId;
- (id)initWithMatchinfoDataWithEntityId:detailEntityId:matchinfoData:;
- (BOOL)isEqualToMatchinfoData:;
- (id)detailEntityId;
- (id)matchinfoData;
+ (id)matchinfoDataWithEntityId:detailEntityId:matchinfoData:;
+ (id)matchinfoDataWithEntityId:detailEntityId:;
@end
