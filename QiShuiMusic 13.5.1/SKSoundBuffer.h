@interface SKSoundBuffer : NSObject
@property (nonatomic) I bufferId;
@property (nonatomic) double duration;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (unsigned int)bufferId;
+ (id)bufferWithFileNamed:;
@end
