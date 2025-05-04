@interface AWECodeGenSuctionBottomInfoModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString btnText;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSInteger containerHeight;
@property (nonatomic) NSInteger duration;
@property (nonatomic) AWECodeGenSuctionBottomFrequencyModel frequencyControlModel;
- (id)lynxUrl;
- (id)btnText;
- (void)setBtnText:;
- (void)setLynxUrl:;
- (id)frequencyControlModel;
- (void)setFrequencyControlModel:;
- (void)setDuration:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (int)duration;
- (id)title;
- (void)setTitle:;
- (int)containerHeight;
- (void)setContainerHeight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
