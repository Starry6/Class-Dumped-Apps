@interface IESIMSearchHotelRoomInfoModel : IESIMBaseApiModel
@property (nonatomic) NSNumber hotelId;
@property (nonatomic) NSNumber typeId;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString name;
@property (nonatomic) NSString typeName;
@property (nonatomic) NSString schema;
@property (nonatomic) IESIMURLModel coverUrl;
- (id)hotelId;
- (id)coverUrl;
- (void)setCoverUrl:;
- (void)setHotelId:;
- (id)typeName;
- (id)schema;
- (void)setName:;
- (void)setTypeName:;
- (void)setSchema:;
- (void)setTypeId:;
- (id)typeId;
- (void).cxx_destruct;
- (id)name;
- (id)price;
- (void)setPrice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
