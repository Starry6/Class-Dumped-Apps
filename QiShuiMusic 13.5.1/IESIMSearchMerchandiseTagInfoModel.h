@interface IESIMSearchMerchandiseTagInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString icon;
@property (nonatomic) q type;
@property (nonatomic) NSString tagID;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) NSString text;
- (id)tagID;
- (void)setText:;
- (id)icon;
- (void)setType:;
- (void)setWidth:;
- (double)height;
- (double)width;
- (long long)type;
- (void)setHeight:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)text;
- (void)setTagID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
