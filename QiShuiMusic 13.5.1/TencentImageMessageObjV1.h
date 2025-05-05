@interface TencentImageMessageObjV1 : TencentBaseMessageObj
@property (nonatomic) NSData dataImage;
@property (nonatomic) NSData dataThumbImage;
@property (nonatomic) NSString sUrl;
@property (nonatomic) NSString sDescription;
@property (nonatomic) {CGSize=dd} szImage;
@property (nonatomic) q nType;
- (BOOL)isVaild;
- (id)szImage;
- (id)dataImage;
- (id)dataThumbImage;
- (id)initWithImageUrl:;
- (long long)nType;
- (id)sDescription;
- (id)sUrl;
- (void)setDataImage:;
- (void)setDataThumbImage:;
- (void)setSDescription:;
- (void)setSUrl:;
- (void)setSzImage:;
- (void)dealloc;
- (id)initWithCoder:;
- (id)initWithImageData:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithType:;
@end
