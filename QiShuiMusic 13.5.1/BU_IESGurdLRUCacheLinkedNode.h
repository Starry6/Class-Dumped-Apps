@interface BU_IESGurdLRUCacheLinkedNode : NSObject
@property (nonatomic) NSString channel;
@property (nonatomic) BU_IESGurdLRUCacheLinkedNode preLinkedNode;
@property (nonatomic) BU_IESGurdLRUCacheLinkedNode nextLinkedNode;
- (id)nextLinkedNode;
- (id)preLinkedNode;
- (void)setNextLinkedNode:;
- (void)setPreLinkedNode:;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
+ (id)nodeWithChannel:;
@end
