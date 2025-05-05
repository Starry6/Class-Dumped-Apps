@interface IESECInternalFeedStyleModel : MTLModel
@property (nonatomic) IESECInternalFlowPageStyleModel innerFlowPageStyle;
@property (nonatomic) IESECInternalFlowMainCardStyleModel innerFlowMainPageStyle;
@property (nonatomic) IESECInternalFlowFeedCardStyleModel innerFlowFeedPageStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)innerFlowFeedPageStyle;
- (id)innerFlowMainPageStyle;
- (id)innerFlowPageStyle;
- (void)setInnerFlowFeedPageStyle:;
- (void)setInnerFlowMainPageStyle:;
- (void)setInnerFlowPageStyle:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
