@interface IESLiveSaaSToolBarData : BDDynamicMTLModel
@property (nonatomic) NSArray entranceListArray;
@property (nonatomic) NSArray morePanelArray;
@property (nonatomic) NSInteger maxEntranceCnt;
@property (nonatomic) NSArray landscapeUpRightArray;
@property (nonatomic) NSDictionary permutation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPermutation:;
- (id)permutation;
- (void).cxx_destruct;
+ (id)entranceListArrayJSONTransformer;
+ (id)landscapeUpRightArrayJSONTransformer;
+ (id)morePanelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
