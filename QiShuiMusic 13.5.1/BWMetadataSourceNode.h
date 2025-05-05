@interface BWMetadataSourceNode : BWSourceNode
@property (nonatomic) ^{opaqueCMFormatDescription=} formatDescription;
- (BOOL)stop:;
- (id)formatDescription;
- (id)clock;
- (BOOL)start:;
- (void)dealloc;
- (id)nodeSubType;
- (id)initWithFormatDescription:clock:;
- (void)appendMetadataSampleBuffer:;
@end
