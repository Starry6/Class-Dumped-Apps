@interface AWECodeGenV1MateCommitBatchResponse : AWEBaseResponseModel
@property (nonatomic) NSArray commitResultModelArray;
@property (nonatomic) NSString commitMsg;
- (id)commitResultModelArray;
- (void)setCommitResultModelArray:;
- (id)commitMsg;
- (void)setCommitMsg:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
