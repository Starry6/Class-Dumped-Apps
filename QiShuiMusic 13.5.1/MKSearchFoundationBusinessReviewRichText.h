@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText
@property (nonatomic) BOOL reviewResolved;
- (BOOL)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameByMapItem:lines:temporaryReviewString:;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:lines:temporaryReviewString:;
- (BOOL)isReviewResolved;
- (void)setReviewResolved:;
@end
