@interface AWEAttributeStringUpdateWithOriginalAwemeProcess : AWEAttributeStringUpdateBaseProcess
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (BOOL)shouldAppendOriginalAwemeTag;
- (BOOL)shouldAppendFromCommentTitle;
- (void)insertOriginalAwemeIfNeededWithAttributedString:;
- (void)insertFromCommentIfNeededWithAttributedString:;
- (void)deleteImageCommentPerString:;
- (id)titleAttributteWithString:;
- (id)originalAwemeTagAttachment;
- (void)originalAwemeTagClicked;
@end
