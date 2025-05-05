@interface CSJGCDAsyncReadPacket : NSObject
- (void).cxx_destruct;
- (id)initWithData:startOffset:maxLength:timeout:readLength:terminator:tag:;
- (void)ensureCapacityForAdditionalDataOfLength:;
- (unsigned long long)optimalReadLengthWithDefault:shouldPreBuffer:;
- (unsigned long long)readLengthForNonTermWithHint:;
- (unsigned long long)readLengthForTermWithHint:shouldPreBuffer:;
- (unsigned long long)readLengthForTermWithPreBuffer:found:;
- (long long)searchForTermAfterPreBuffering:;
@end
