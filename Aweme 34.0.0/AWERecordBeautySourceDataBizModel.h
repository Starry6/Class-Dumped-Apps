@interface AWERecordBeautySourceDataBizModel : NSObject
@property (nonatomic) <AWERecordBeautyNodeProtocol> rootNode;
@property (nonatomic) NSMapTable nodeFlatDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRootNode:;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (id)nodeFlatDict;
- (void)p_fillNodeFlatDictWithRootNode:;
- (void)setNodeFlatDict:;
- (void)fillNodeFlatDictWithNewRootNode:;
- (void).cxx_destruct;
- (id)rootNode;
- (void)setRootNode:;
@end
