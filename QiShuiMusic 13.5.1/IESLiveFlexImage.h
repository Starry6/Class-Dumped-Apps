@interface IESLiveFlexImage : IESLiveDynamicMTLModel
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray flexSetting;
@property (nonatomic) NSArray textSetting;
@property (nonatomic) UIImage localImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapPBFlexImageStruct;
+ (id)liveFlexImageFromFlexImageStruct:;
+ (id)JSONKeyPathsByPropertyKey;
@end
