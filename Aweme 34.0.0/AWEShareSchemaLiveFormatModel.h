@interface AWEShareSchemaLiveFormatModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel roomCover;
@property (nonatomic) NSString roomDesc;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) BOOL isLiving;
- (void)setExtraParams:;
- (id)extraParams;
- (BOOL)isLiving;
- (id)roomCover;
- (void)setRoomCover:;
- (id)roomDesc;
- (void)setRoomDesc:;
- (void)setIsLiving:;
- (void).cxx_destruct;
+ (id)extraParamsJSONTransformer;
+ (id)roomCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
