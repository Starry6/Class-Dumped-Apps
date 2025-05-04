@interface AWEBatchResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray errorItemsID;
@property (nonatomic) NSArray successItemID;
- (id)errorItemsID;
- (void)setErrorItemsID:;
- (id)successItemID;
- (void)setSuccessItemID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
