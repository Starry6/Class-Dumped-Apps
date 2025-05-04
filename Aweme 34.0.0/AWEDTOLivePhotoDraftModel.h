@interface AWEDTOLivePhotoDraftModel : MTLModel
@property (nonatomic) q mode;
@property (nonatomic) NSString videoSource;
@property (nonatomic) NSString imageSource;
@property (nonatomic) NSString effectId;
@property (nonatomic) NSString effectPath;
@property (nonatomic) BOOL isSystemlivephotoFromRecord;
@property (nonatomic) NSString videoFrameImagePath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)effectPath;
- (void)setEffectPath:;
- (BOOL)isSystemlivephotoFromRecord;
- (void)setIsSystemlivephotoFromRecord:;
- (id)videoFrameImagePath;
- (void)setVideoFrameImagePath:;
- (id)imageSource;
- (void)setMode:;
- (long long)mode;
- (void)setImageSource:;
- (void).cxx_destruct;
- (void)setVideoSource:;
- (id)videoSource;
- (id)effectId;
- (void)setEffectId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
