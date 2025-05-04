@interface AWEOfficialContentLabel : YYLabel
@property (nonatomic) NSAttributedString foldTruncationToken;
@property (nonatomic) YYLabel hightToken;
@property (nonatomic) @? unFoldActionBlock;
- (id)foldTruncationToken;
- (void)setHightToken:;
- (void)setFoldTruncationToken:;
- (id)hightToken;
- (id)unFoldActionBlock;
- (void)setNeedFoldLines:;
- (void)setNeedUnfold;
- (void)setUnFoldActionBlock:;
- (id)init;
- (void).cxx_destruct;
@end
