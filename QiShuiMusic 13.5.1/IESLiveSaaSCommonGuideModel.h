@interface IESLiveSaaSCommonGuideModel : BDDynamicModel
@property (nonatomic) Q type;
@property (nonatomic) IESLiveSaaSPBText mainContent;
@property (nonatomic) NSArray secondaryContent;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) BOOL isRoundedIcon;
@property (nonatomic) IESLiveSaaSPBText buttonContent;
@property (nonatomic) NSString buttonActionSchema;
@property (nonatomic) IESLiveSaaSImage buttonIcon;
@property (nonatomic) q duration;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) UIImage buttonImage;
- (id)initWithMessage:;
@end
