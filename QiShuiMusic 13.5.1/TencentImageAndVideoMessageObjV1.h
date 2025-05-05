@interface TencentImageAndVideoMessageObjV1 : TencentBaseMessageObj
@property (nonatomic) TencentImageMessageObjV1 objImageMessage;
@property (nonatomic) TencentVideoMessageV1 objVideoMessage;
- (BOOL)isVaild;
- (id)objImageMessage;
- (id)objVideoMessage;
- (id)initWithMessage:videoUrl:;
- (void)setDataImage:;
- (void)setObjImageMessage:;
- (void)setObjVideoMessage:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setVideoUrl:;
@end
