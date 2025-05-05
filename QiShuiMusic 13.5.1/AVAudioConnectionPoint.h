@interface AVAudioConnectionPoint : NSObject
@property (nonatomic) AVAudioNode node;
@property (nonatomic) Q bus;
- (id)node;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)initWithNode:bus:;
- (unsigned long long)bus;
+ (id)connectionPointWithNode:bus:;
@end
