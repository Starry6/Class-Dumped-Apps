@interface BDXBridgeMediaTakePhotoMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber max_images_count;
@property (nonatomic) NSNumber isNeedCut;
@property (nonatomic) NSNumber needOriginalParams;
@property (nonatomic) NSNumber noCompress;
- (id)isNeedCut;
- (id)max_images_count;
- (id)needOriginalParams;
- (id)noCompress;
- (void)setIsNeedCut:;
- (void)setMax_images_count:;
- (void)setNeedOriginalParams:;
- (void)setNoCompress:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
