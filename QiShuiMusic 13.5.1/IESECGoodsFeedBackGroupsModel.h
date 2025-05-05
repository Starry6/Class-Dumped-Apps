@interface IESECGoodsFeedBackGroupsModel : MTLModel
@property (nonatomic) NSString toastText;
@property (nonatomic) NSArray feedBackItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedBackItems;
- (void)setFeedBackItems:;
- (void)setToastText:;
- (id)toastText;
- (void).cxx_destruct;
+ (id)feedBackItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
