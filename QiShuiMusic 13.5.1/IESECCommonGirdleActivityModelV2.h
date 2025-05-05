@interface IESECCommonGirdleActivityModelV2 : MTLModel
@property (nonatomic) NSString girdleType;
@property (nonatomic) IESECURLModel bgPic;
@property (nonatomic) IESECURLModel namePic;
@property (nonatomic) IESECCommonGirdleCountSloganModel slogan;
@property (nonatomic) IESECCommonGirdleCountDownModel countDown;
@property (nonatomic) NSString url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)namePic;
- (id)bgPic;
- (id)girdleType;
- (void)setBgPic:;
- (void)setCountDown:;
- (void)setGirdleType:;
- (void)setNamePic:;
- (void)setSlogan:;
- (id)slogan;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)countDown;
+ (id)JSONKeyPathsByPropertyKey;
@end
