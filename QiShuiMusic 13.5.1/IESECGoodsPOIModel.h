@interface IESECGoodsPOIModel : MTLModel
@property (nonatomic) NSNumber total;
@property (nonatomic) NSString poiListURLString;
@property (nonatomic) IESECGoodsPOIDetailModel selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiListURLString;
- (void)setPoiListURLString:;
- (id)selected;
- (void)setSelected:;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)JSONKeyPathsByPropertyKey;
@end
