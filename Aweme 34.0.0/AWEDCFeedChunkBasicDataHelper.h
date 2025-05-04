@interface AWEDCFeedChunkBasicDataHelper : CSPChunkDataHelper
- (id)customEndTag;
- (id)customSplitTag;
- (unsigned int)customDecodeChunkLengthFromString:;
- (BOOL)customRawDataCallbackMode;
@end
