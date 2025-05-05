@interface IESECLiveListBottomModel : MTLModel
@property (nonatomic) NSString bottomTitle;
@property (nonatomic) NSString bottomEndTitle;
@property (nonatomic) IESECLiveListBottomGuideModel bottomGuideInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bottomGuideInfo;
- (id)bottomEndTitle;
- (void)setBottomEndTitle:;
- (void)setBottomGuideInfo:;
- (void).cxx_destruct;
- (id)bottomTitle;
- (void)setBottomTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
