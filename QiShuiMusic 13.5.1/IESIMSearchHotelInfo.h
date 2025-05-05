@interface IESIMSearchHotelInfo : IESIMBaseApiModel
@property (nonatomic) NSString viewMoreUrl;
@property (nonatomic) NSString title;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSArray roomList;
@property (nonatomic) NSString aladdinID;
- (void)setViewMoreUrl:;
- (id)aladdinID;
- (id)roomList;
- (void)setRoomList:;
- (id)viewMoreUrl;
- (void)setIconURL:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)iconURL;
+ (id)aladdinIDJSONTransformer;
+ (id)roomListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
