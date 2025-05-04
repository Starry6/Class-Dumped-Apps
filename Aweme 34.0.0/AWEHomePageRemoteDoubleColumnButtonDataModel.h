@interface AWEHomePageRemoteDoubleColumnButtonDataModel : AWEHomePageRemoteItemDataModel
@property (nonatomic) AWEHomePageRemoteCommonButtonDataModel singleColumnModel;
@property (nonatomic) AWEHomePageRemoteCommonButtonDataModel doubleColumnModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)singleColumnModel;
- (void)setSingleColumnModel:;
- (id)doubleColumnModel;
- (void)setDoubleColumnModel:;
- (void).cxx_destruct;
- (BOOL)isModelValid;
+ (id)singleColumnModelJSONTransformer;
+ (id)doubleColumnModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
