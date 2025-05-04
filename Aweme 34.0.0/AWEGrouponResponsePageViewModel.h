@interface AWEGrouponResponsePageViewModel : NSObject
@property (nonatomic) AWEGrouponResponsePageInfo pageInfo;
@property (nonatomic) NSString rootTag;
@property (nonatomic) NSDictionary nodeMap;
@property (nonatomic) NSDictionary containerNodeMap;
- (id)nodeMap;
- (void)setNodeMap:;
- (id)nodeWithTag:;
- (id)initWithRootTag:pageInfo:nodeMap:;
- (void)p_fetchContainerNodeMap;
- (id)containerNodeMap;
- (id)rootTag;
- (id)containerNodeMapFromNodeMap:;
- (void)setRootTag:;
- (void)setContainerNodeMap:;
- (id)componentNodeTagListInTreeWhichAsRoot:;
- (void).cxx_destruct;
- (id)pageInfo;
- (void)setPageInfo:;
@end
