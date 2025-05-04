@interface AWENearbyLifeDualRoomProductInfo : AWEBaseApiModel
@property (nonatomic) AWEURLModel firstIcon;
@property (nonatomic) NSString firstTag;
@property (nonatomic) NSString title;
@property (nonatomic) q uiStyle;
- (void)setFirstIcon:;
- (id)firstTag;
- (void)setFirstTag:;
- (id)firstIcon;
- (void)setUiStyle:;
- (long long)uiStyle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)firstIconJSONTransformer;
@end
