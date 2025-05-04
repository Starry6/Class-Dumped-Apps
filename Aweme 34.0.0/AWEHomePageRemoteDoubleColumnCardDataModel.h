@interface AWEHomePageRemoteDoubleColumnCardDataModel : AWEHomePageRemoteItemDataModel
@property (nonatomic) AWEHomePageRemoteCommonCardDataModel singleColumnModel;
@property (nonatomic) AWEHomePageRemoteCommonCardDataModel doubleColumnModel;
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
