@interface IESIMShareSchemaLiveFormatModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel roomCover;
@property (nonatomic) NSString roomDesc;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) BOOL isLiving;
- (void)setExtraParams:;
- (id)extraParams;
- (BOOL)isLiving;
- (id)roomCover;
- (id)roomDesc;
- (void)setIsLiving:;
- (void)setRoomCover:;
- (void)setRoomDesc:;
- (void).cxx_destruct;
+ (id)extraParamsJSONTransformer;
+ (id)roomCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
