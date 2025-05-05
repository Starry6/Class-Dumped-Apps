@interface SACallTreeTruncatedLeafCallstacks : SACallTreeFrame
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)writeJSONDictionaryEntriesToStream:;
- (void).cxx_destruct;
- (BOOL)isTruncatedLeafCallstack;
- (id)initWithFrame:startSampleIndex:sampleCount:otherCallTreeDescription:;
+ (id)callTreeFrameWithFrame:startSampleIndex:sampleCount:isLeafFrame:;
@end
