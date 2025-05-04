@interface AWECodeGenCommentAudioModel : AWEBaseDataModel
@property (nonatomic) NSString vid;
@property (nonatomic) NSString content;
@property (nonatomic) NSString wave;
@property (nonatomic) q duration;
@property (nonatomic) NSInteger asrStatus;
@property (nonatomic) NSString asrText;
- (id)wave;
- (void)setWave:;
- (id)asrText;
- (id)content;
- (void)setDuration:;
- (void)setContent:;
- (void).cxx_destruct;
- (long long)duration;
- (int)asrStatus;
- (void)setAsrStatus:;
- (void)setVid:;
- (id)vid;
- (void)setAsrText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
