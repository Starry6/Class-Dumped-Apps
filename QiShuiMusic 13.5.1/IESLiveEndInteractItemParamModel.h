@interface IESLiveEndInteractItemParamModel : IESLiveBridgeModel
@property (nonatomic) IESLiveEndInteractItemOpenPlatformInteractInfoModel openPlatformInteractInfo;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSNumber dataType;
@property (nonatomic) NSNumber playmode;
@property (nonatomic) NSString source;
- (id)openPlatformInteractInfo;
- (id)playmode;
- (void)setOpenPlatformInteractInfo:;
- (void)setPlaymode:;
- (void)setDataType:;
- (void)setType:;
- (id)dataType;
- (id)type;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
+ (id)modelCustomPropertyMapper;
@end
