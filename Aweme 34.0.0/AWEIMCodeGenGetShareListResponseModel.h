@interface AWEIMCodeGenGetShareListResponseModel : AWEBaseResponseModel
@property (nonatomic) NSArray shareListModelArray;
@property (nonatomic) NSDictionary totalShareSource;
@property (nonatomic) AWEIMCodeGenRequestConfigModel requestConfigModel;
@property (nonatomic) NSString message;
- (id)requestConfigModel;
- (id)shareListModelArray;
- (id)totalShareSource;
- (void)setShareListModelArray:;
- (void)setTotalShareSource:;
- (void)setRequestConfigModel:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
