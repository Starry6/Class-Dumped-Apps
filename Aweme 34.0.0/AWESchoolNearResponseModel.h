@interface AWESchoolNearResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray schoolList;
- (id)schoolList;
- (void)setSchoolList:;
- (void).cxx_destruct;
+ (id)schoolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
