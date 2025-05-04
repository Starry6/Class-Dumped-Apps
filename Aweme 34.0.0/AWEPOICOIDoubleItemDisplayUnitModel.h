@interface AWEPOICOIDoubleItemDisplayUnitModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString styleType;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) NSString content;
@property (nonatomic) AWEPOICOIDoubleItemDisplayStyleModel style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setStyleType:;
- (id)content;
- (id)type;
- (id)style;
- (void)setContent:;
- (void)setType:;
- (id)styleType;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
