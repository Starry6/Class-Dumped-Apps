@interface LSBachContourInfoModel : NSObject
@property (nonatomic) q version;
@property (nonatomic) NSString interactID;
@property (nonatomic) q scene;
@property (nonatomic) {CGSize=dd} cameraSize;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSArray items;
@property (nonatomic) ^{contour_info_st=CSS{con_string_=S[0C]}{contour_extra_=CS[0C]}C[0{contour_item_=S[0{point_=SS}]}]} originContourInfoData;
- (id)cameraSize;
- (id)interactID;
- (id)originContourInfoData;
- (void)setCameraSize:;
- (void)setInteractID:;
- (void)setOriginContourInfoData:;
- (id)init;
- (void)setScene:;
- (void)setVersion:;
- (long long)version;
- (id)items;
- (void)setWidth:;
- (long long)scene;
- (long long)height;
- (long long)width;
- (void)setItems:;
- (void)setHeight:;
- (void).cxx_destruct;
@end
