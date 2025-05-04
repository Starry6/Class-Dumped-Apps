@interface AWEMusicDetailInspirationQuickFlashResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber status;
@property (nonatomic) AWEMusicDetailInspirationQuickFlashBodyModel quickFlashBodyModel;
- (id)quickFlashBodyModel;
- (void)setQuickFlashBodyModel:;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
+ (id)quickFlashBodyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
