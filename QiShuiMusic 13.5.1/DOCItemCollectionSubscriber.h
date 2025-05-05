@interface DOCItemCollectionSubscriber : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) @? updateBlock;
- (void)setUUID:;
- (id)updateBlock;
- (id)initWithUpdateBlock:;
- (void).cxx_destruct;
- (id)UUID;
- (void)setUpdateBlock:;
@end
