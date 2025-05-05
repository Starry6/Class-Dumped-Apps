@interface IESECLiveListHeaderSearchHintWordInfo : MTLModel
@property (nonatomic) NSString hintWord;
@property (nonatomic) IESECLiveImageURLModel hintIcon;
@property (nonatomic) IESECLiveTrackConfigModel showTrackInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hintIcon;
- (id)hintWord;
- (void)setHintIcon:;
- (void)setHintWord:;
- (void)setShowTrackInfo:;
- (id)showTrackInfo;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
