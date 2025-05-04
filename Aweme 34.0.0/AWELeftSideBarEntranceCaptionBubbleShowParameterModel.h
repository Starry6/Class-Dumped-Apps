@interface AWELeftSideBarEntranceCaptionBubbleShowParameterModel : AWELeftSideBarEntranceCaptionBubbleBaseParameterModel
@property (nonatomic) NSString content;
@property (nonatomic) UIImage strengthenDarkImage;
@property (nonatomic) UIImage strengthenLightImage;
@property (nonatomic) NSString strengthenDarkImageUrl;
@property (nonatomic) NSString strengthenLightImageUrl;
- (void)setStrengthenLightImageUrl:;
- (void)setStrengthenDarkImageUrl:;
- (id)strengthenDarkImage;
- (void)setStrengthenDarkImage:;
- (id)strengthenLightImage;
- (void)setStrengthenLightImage:;
- (id)strengthenDarkImageUrl;
- (id)strengthenLightImageUrl;
- (id)initWithComponentId:withBusinessId:withContent:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
