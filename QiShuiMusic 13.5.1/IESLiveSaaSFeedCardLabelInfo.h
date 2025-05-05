@interface IESLiveSaaSFeedCardLabelInfo : BDDynamicMTLModel
@property (nonatomic) q labelType;
@property (nonatomic) q displayType;
@property (nonatomic) IESLiveSaaSFeedCardSpliceLabel spliceLabel;
@property (nonatomic) IESLiveSaaSImage wholeLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)spliceLabel;
- (id)wholeLabel;
- (long long)displayType;
- (long long)labelType;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
