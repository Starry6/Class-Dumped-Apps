@interface CalLogNode : NSObject
@property (nonatomic) NSMutableArray subnodes;
@property (nonatomic) NSMutableArray accumulator;
@property (nonatomic) CalLogFilter filter;
@property (nonatomic) Q accumulatorBufferSize;
@property (nonatomic) <CalLogWriter> writer;
- (id)filter;
- (void)setFilter:;
- (id)init;
- (BOOL)flush;
- (id)accumulator;
- (void)setWriter:;
- (void).cxx_destruct;
- (id)writer;
- (void)processEnvelope:;
- (void)clearAccumulator;
- (void)flushAccumulator;
- (void)addSubnode:;
- (void)removeSubnode:;
- (id)allSubnodes;
- (int)minimumLevelOfNodeTree;
- (id)subnodes;
- (void)setSubnodes:;
- (void)setAccumulator:;
- (unsigned long long)accumulatorBufferSize;
- (void)setAccumulatorBufferSize:;
@end
