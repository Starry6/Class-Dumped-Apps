@interface TencentAudioMessageObjV1 : TencentBaseMessageObj
@property (nonatomic) NSString sUrl;
@property (nonatomic) NSData dataImagePreview;
@property (nonatomic) NSString sImagePreviewUrl;
@property (nonatomic) NSString sDescription;
- (BOOL)isVaild;
- (id)dataImagePreview;
- (id)initWithAudioUrl:;
- (id)sDescription;
- (id)sImagePreviewUrl;
- (id)sUrl;
- (void)setDataImagePreview:;
- (void)setSDescription:;
- (void)setSImagePreviewUrl:;
- (void)setSUrl:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
