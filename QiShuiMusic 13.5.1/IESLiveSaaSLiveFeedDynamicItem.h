@interface IESLiveSaaSLiveFeedDynamicItem : BDDynamicMTLModel
@property (nonatomic) NSString enterSource;
@property (nonatomic) NSString liveFeedUrl;
@property (nonatomic) BOOL canDraw;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveFeedUrl:;
- (BOOL)canDraw;
- (void)setEnterSource:;
- (id)enterSource;
- (id)liveFeedUrl;
- (void)setCanDraw:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
