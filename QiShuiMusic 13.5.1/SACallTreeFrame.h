@interface SACallTreeFrame : SACallTreeNode
@property (nonatomic) BOOL isTruncatedLeafCallstack;
@property (nonatomic) SAFrame frame;
@property (nonatomic) NSArray childFrames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)childFrames;
- (id)frame;
- (void)writeJSONDictionaryEntriesToStream:;
- (void).cxx_destruct;
- (id)initWithFrame:startSampleIndex:sampleCount:isLeafFrame:;
- (BOOL)isTruncatedLeafCallstack;
+ (id)callTreeFrameWithFrame:startSampleIndex:sampleCount:isLeafFrame:;
@end
