@interface AWEMomentCameraPolaroidConfigItem : MTLModel
@property (nonatomic) NSString bgURL1x1;
@property (nonatomic) NSString bgURL4x3;
@property (nonatomic) double photoTopMargin;
@property (nonatomic) AWEMomentCameraPolaroidTextConfig textConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textConfig;
- (void)setTextConfig:;
- (id)bgURL1x1;
- (void)setBgURL1x1:;
- (id)bgURL4x3;
- (void)setBgURL4x3:;
- (double)photoTopMargin;
- (void)setPhotoTopMargin:;
- (void).cxx_destruct;
+ (id)textConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
