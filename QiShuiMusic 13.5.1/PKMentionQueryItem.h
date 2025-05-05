@interface PKMentionQueryItem : PKDetectionQueryItem
@property (nonatomic) CHPrefixQueryItem coreHandwritingPrefixQueryItem;
@property (nonatomic) NSString mentionResult;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:;
- (id)coreHandwritingPrefixQueryItem;
- (void)setCoreHandwritingPrefixQueryItem:;
- (id)mentionResult;
- (void)setMentionResult:;
@end
