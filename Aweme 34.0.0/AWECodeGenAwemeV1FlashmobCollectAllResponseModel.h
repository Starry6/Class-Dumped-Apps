@interface AWECodeGenAwemeV1FlashmobCollectAllResponseModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenColDataModel dataModel;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (void)setStatusMsg:;
- (int)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)dataModel;
- (void)setDataModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
