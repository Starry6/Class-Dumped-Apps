@interface AWESearchHotelInfo : AWEBaseApiModel
@property (nonatomic) NSString viewMoreUrl;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSArray roomList;
@property (nonatomic) NSString aladdinID;
- (id)aladdinID;
- (id)viewMoreUrl;
- (void)setViewMoreUrl:;
- (id)roomList;
- (void)setRoomList:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)aladdinIDJSONTransformer;
+ (id)roomListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
