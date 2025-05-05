@interface IESECLiveCartCustomAnimationModel : MTLModel
@property (nonatomic) IESECLiveShopCartServerAnimation anim;
@property (nonatomic) NSString businessKey;
@property (nonatomic) NSString iconKey;
@property (nonatomic) NSString icon;
@property (nonatomic) IESECLiveCartControlConfigModel control;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconKey;
- (void)setBusinessKey:;
- (id)anim;
- (id)businessKey;
- (void)setAnim:;
- (void)setIconKey:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)control;
- (void)setControl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
