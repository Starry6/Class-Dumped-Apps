@interface AWERecordBeautyRootNode : NSObject
@property (nonatomic) <AWERecordBeautyNodeProtocol> parentNode;
@property (nonatomic) NSMutableArray childNodes;
@property (nonatomic) NSMutableArray childExtraNodes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)childExtraNodes;
- (void)addChildExtraNodes:;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (void)setChildExtraNodes:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)childNodes;
- (id)parentNode;
- (void)setParentNode:;
- (void)addChildNode:;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:;
@end
