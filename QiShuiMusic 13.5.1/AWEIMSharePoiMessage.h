@interface AWEIMSharePoiMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) q itemCount;
@property (nonatomic) IESIMURLModel mapURL;
@property (nonatomic) NSArray coverURLArray;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) IESIMURLModel poiIconURL;
@property (nonatomic) NSString subtitle;
- (id)coverURLArray;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)mapURL;
- (id)poiID;
- (id)poiIconURL;
- (id)pushDetail;
- (void)setCoverURLArray:;
- (void)setMapURL:;
- (void)setPoiID:;
- (void)setPoiIconURL:;
- (void)setPushDetail:;
- (long long)itemCount;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (id)copyWithZone:;
- (void)setItemCount:;
@end
