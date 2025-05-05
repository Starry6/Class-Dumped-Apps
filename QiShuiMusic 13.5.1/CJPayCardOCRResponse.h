@interface CJPayCardOCRResponse : CJPayBaseResponse
@property (nonatomic) NSString cardNoStr;
@property (nonatomic) NSString croppedImgStr;
- (id)cardNoStr;
- (id)croppedImgStr;
- (void)setCardNoStr:;
- (void)setCroppedImgStr:;
- (void).cxx_destruct;
+ (id)keyMapper;
@end
