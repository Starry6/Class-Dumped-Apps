@interface KtraceLoggingDataSource : NSObject
@property (nonatomic) ^{ktrace_file={__CFRuntimeBase=QAQ}ii{ktrace_chunk_array=^^{ktrace_chunk}^{ktrace_chunk}QQQqq}{ktrace_chunk_array=^^{ktrace_chunk}^{ktrace_chunk}QQQqq}^{ktrace_chunk}^{ktrace_chunk}^{ktrace_chunk}QQI{timezone=ii}{?=II}i^{ktrace_file}^{__CFDictionary}I^{__CFDictionary}^{ktrace_chunk}*Q@?@?@?qqBBBBBB} _ktfile;
@property (nonatomic) NSData _metadata;
@property (nonatomic) ^{ktrace_chunk=^{ktrace_file}Q(?=q^{__CFData})QISS^{ktrace_chunk}{ktrace_chunk_array=^^{ktrace_chunk}^{ktrace_chunk}QQQqq}(?=^{ktrace_chunk})} _nextChunk;
@property (nonatomic) BOOL _skipFirst;
- (void)dealloc;
- (id)_metadata;
- (id)nextEventDataChunk;
- (id)metadataChunk;
- (id)initWithKtraceFile:;
- (id)_ktfile;
- (void)set_ktfile:;
- (id)_nextChunk;
- (void)set_nextChunk:;
- (void)set_metadata:;
- (BOOL)_skipFirst;
- (void)set_skipFirst:;
@end
