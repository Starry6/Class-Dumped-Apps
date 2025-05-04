@interface AWELiteActivityPopupResponseModel : MTLModel
@property (nonatomic) NSNumber errNO;
@property (nonatomic) NSString errTips;
@property (nonatomic) AWELiteActivityPopupDataModel data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errTips;
- (void)setErrTips:;
- (id)errNO;
- (void)setErrNO:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
