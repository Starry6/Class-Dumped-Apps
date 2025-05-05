@interface TMPasteboardCache : NSObject
@property (nonatomic) q changeCountForWrite;
@property (nonatomic) @ lastWriteValue;
@property (nonatomic) UIPasteboard cachePasteboard;
- (id)cachePasteboard;
- (long long)changeCountForWrite;
- (id)lastWriteValue;
- (void)setCachePasteboard:;
- (void)setChangeCountForWrite:;
- (void)setLastWriteValue:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
