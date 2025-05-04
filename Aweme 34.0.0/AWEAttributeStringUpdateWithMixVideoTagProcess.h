@interface AWEAttributeStringUpdateWithMixVideoTagProcess : AWEAttributeStringUpdateBaseProcess
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (BOOL)shouldInsertMinorAlbumVideoTag;
- (BOOL)shouldAppendMixVideoTag;
- (BOOL)shouldInsertPlayletVideoTag;
- (void)insertMixVideoTagIfNeededWithAttributedString:;
- (void)insertMixVideoNameIfNeededWithAttributedString:;
- (void)insertPlayletVideoTagIfNeededWithAttributedString:;
- (void)insertMinorAlbumVideoTagIfNeededWithAttributedString:;
- (void)insertTitle:attributedString:font:isNeedVerticalLine:atIndex:;
- (id)getMixTitleHighLight;
- (void)insertTitle:attributedString:font:isNeedVerticalLine:;
- (id)mixNameFontForWeight:;
@end
