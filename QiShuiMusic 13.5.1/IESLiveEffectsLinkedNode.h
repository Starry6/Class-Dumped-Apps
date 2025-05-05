@interface IESLiveEffectsLinkedNode : NSObject
@property (nonatomic) NSNumber effectID;
@property (nonatomic) q size;
@property (nonatomic) IESLiveEffectsLinkedNode preLinkedNode;
@property (nonatomic) IESLiveEffectsLinkedNode nextLinkedNode;
- (void)updateWithSize:;
- (id)initWithEffectID:size:;
- (id)nextLinkedNode;
- (id)preLinkedNode;
- (void)setEffectID:;
- (void)setNextLinkedNode:;
- (void)setPreLinkedNode:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSize:;
- (long long)size;
- (id)effectID;
@end
