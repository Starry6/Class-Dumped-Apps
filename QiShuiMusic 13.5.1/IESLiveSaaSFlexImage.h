@interface IESLiveSaaSFlexImage : BDDynamicMTLModel
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray flexSetting;
@property (nonatomic) NSArray textSetting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTextSetting:;
- (id)mapToPBImage;
- (id)textSetting;
- (void).cxx_destruct;
+ (id)liveFlexImageFromFlexImageStruct:;
+ (id)JSONKeyPathsByPropertyKey;
@end
