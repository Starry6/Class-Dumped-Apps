@interface CJPayOCRResponseModel : JSONModel
@property (nonatomic) NSString code;
@property (nonatomic) CJPayOCRUploadResponseModel data;
- (id)data;
- (id)code;
- (void).cxx_destruct;
- (void)setData:;
- (void)setCode:;
@end
