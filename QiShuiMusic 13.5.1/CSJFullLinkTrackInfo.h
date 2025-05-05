@interface CSJFullLinkTrackInfo : NSObject
@property (nonatomic) BUThreadSafeMutableArray sequenceArray;
@property (nonatomic) BUThreadSafeDictionary logDict;
- (id)logDict;
- (void)_pbu_printDetailInfo;
- (void)addWithLogKey:extraDic:;
- (id)csj_dictionaryValue;
- (id)sequenceArray;
- (void)setLogDict:;
- (void)setSequenceArray:;
- (id)init;
- (void).cxx_destruct;
@end
