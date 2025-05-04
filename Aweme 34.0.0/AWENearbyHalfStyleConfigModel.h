@interface AWENearbyHalfStyleConfigModel : MTLModel
@property (nonatomic) AWEURLModel targetImgUrl;
@property (nonatomic) Q arrowStyle;
@property (nonatomic) Q layoutAdaptType;
@property (nonatomic) AWEURLModel arrowHeadImgUrl;
@property (nonatomic) AWEURLModel arrowNockImgUrl;
@property (nonatomic) AWENearbyHalfStyleRichArrowSetting richArrowSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targetImgUrl;
- (void)setTargetImgUrl:;
- (void)setArrowStyle:;
- (unsigned long long)layoutAdaptType;
- (void)setLayoutAdaptType:;
- (id)arrowHeadImgUrl;
- (void)setArrowHeadImgUrl:;
- (id)arrowNockImgUrl;
- (void)setArrowNockImgUrl:;
- (id)richArrowSettings;
- (void)setRichArrowSettings:;
- (void).cxx_destruct;
- (unsigned long long)arrowStyle;
+ (BOOL)automaticallyDefaultMapping;
@end
