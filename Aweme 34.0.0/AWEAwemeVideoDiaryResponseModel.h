@interface AWEAwemeVideoDiaryResponseModel : MTLModel
@property (nonatomic) NSNumber errNo;
@property (nonatomic) NSString errTips;
@property (nonatomic) AWEAwemeVideoDiaryDataModel data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errNo;
- (void)setErrNo:;
- (id)errTips;
- (void)setErrTips:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
