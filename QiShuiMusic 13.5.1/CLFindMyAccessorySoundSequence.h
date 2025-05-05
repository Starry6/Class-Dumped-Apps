@interface CLFindMyAccessorySoundSequence : NSObject
@property (nonatomic) NSData encodedSequence;
@property (nonatomic) Q type;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (id)initWithType:;
- (id)copyWithZone:;
- (id)initWithType:encodedSequence:;
- (void)addSoundBlockWithAsset:loopCount:duration:;
- (id)encodedSequence;
+ (BOOL)supportsSecureCoding;
+ (id)defaultSequence;
+ (id)shortSequence;
+ (id)rangingSequence;
@end
