@interface AWEAdDoubleColumnFeedbackModel : MTLModel
@property (nonatomic) NSArray filterWordNewArray;
@property (nonatomic) NSArray filterWordCategoryDetailsArray;
@property (nonatomic) NSArray reportFilterWordArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterWordNewArray;
- (id)filterWordCategoryDetailsArray;
- (void)setFilterWordNewArray:;
- (void)setFilterWordCategoryDetailsArray:;
- (id)reportFilterWordArray;
- (void)setReportFilterWordArray:;
- (void).cxx_destruct;
+ (id)filterWordNewArrayJSONTransformer;
+ (id)filterWordCategoryDetailsArrayJSONTransformer;
+ (id)reportFilterWordArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
