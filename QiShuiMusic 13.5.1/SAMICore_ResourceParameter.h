@interface SAMICore_ResourceParameter : NSObject
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger maxBlockSize;
@property (nonatomic) NSInteger numChannel;
@property (nonatomic) NSString input;
@property (nonatomic) NSArray resourcePaths;
- (int)maxBlockSize;
- (int)numChannel;
- (id)resourcePaths;
- (void)setMaxBlockSize:;
- (void)setNumChannel:;
- (void)setResourcePaths:;
- (id)input;
- (int)sampleRate;
- (void)setInput:;
- (void)setSampleRate:;
@end
