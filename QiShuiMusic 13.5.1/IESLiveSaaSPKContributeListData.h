@interface IESLiveSaaSPKContributeListData : BDDynamicMTLModel
@property (nonatomic) NSString anchorID;
@property (nonatomic) NSString secAnchorID;
@property (nonatomic) NSArray rankList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldEnqueueWaiting;
+ (id)rankListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
