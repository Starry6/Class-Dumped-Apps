@interface AWESearchHotelRoomInfoModel : AWEBaseApiModel
@property (nonatomic) NSNumber hotelId;
@property (nonatomic) NSNumber typeId;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString name;
@property (nonatomic) NSString typeName;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEURLModel coverUrl;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)hotelId;
- (void)setHotelId:;
- (id)price;
- (id)schema;
- (id)typeName;
- (void)setTypeId:;
- (void)setSchema:;
- (id)typeId;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setPrice:;
- (void)setTypeName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
