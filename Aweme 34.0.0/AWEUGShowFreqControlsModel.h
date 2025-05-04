@interface AWEUGShowFreqControlsModel : MTLModel
@property (nonatomic) NSArray showFreqList;
@property (nonatomic) AWEUGHideModel hideModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowFreqList:;
- (id)showFreqList;
- (id)hideModel;
- (void)setHideModel:;
- (void).cxx_destruct;
+ (id)showFreqListJSONTransformer;
+ (id)hideModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
