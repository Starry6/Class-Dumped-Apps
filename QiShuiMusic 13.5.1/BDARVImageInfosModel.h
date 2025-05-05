@interface BDARVImageInfosModel : JSONModel
@property (nonatomic) NSArray url_list;
@property (nonatomic) NSString<Optional> uri;
@property (nonatomic) NSString<Optional> url;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) NSString<Optional> type;
- (void)setUrl_list:;
- (id)urlStringAtIndex:;
- (id)url_list;
- (id)uri;
- (id)url;
- (void)setType:;
- (void)setWidth:;
- (void)setUrl:;
- (double)height;
- (double)width;
- (id)type;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setUri:;
@end
