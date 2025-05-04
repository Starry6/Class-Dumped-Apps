@interface AWECodeGenSicilyImageModel : AWEBaseDataModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSString longitude;
@property (nonatomic) NSString latitude;
@property (nonatomic) NSString insertShootPositionId;
- (id)insertShootPositionId;
- (void)setInsertShootPositionId:;
- (void)setLatitude:;
- (void)setHeight:;
- (id)latitude;
- (void)setWidth:;
- (void)setLongitude:;
- (id)uri;
- (id)longitude;
- (int)width;
- (void)setUri:;
- (void).cxx_destruct;
- (int)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
