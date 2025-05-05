@interface IESLiveSaaSMatchTabFrame : BDDynamicMTLModel
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) NSMutableArray replayTabsArray;
@property (nonatomic) NSString color;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void).cxx_destruct;
+ (id)replayTabsArrayJSONTransformer;
+ (id)tabsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
