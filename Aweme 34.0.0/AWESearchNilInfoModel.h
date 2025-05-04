@interface AWESearchNilInfoModel : AWEBaseApiModel
@property (nonatomic) NSString searchNilItem;
@property (nonatomic) NSString searchNilType;
@property (nonatomic) NSNumber textType;
- (id)searchNilItem;
- (id)searchNilType;
- (void)setSearchNilType:;
- (void)setSearchNilItem:;
- (void).cxx_destruct;
- (void)setTextType:;
- (id)textType;
+ (id)JSONKeyPathsByPropertyKey;
@end
