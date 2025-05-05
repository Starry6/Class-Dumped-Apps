@interface PKHashtagQueryItem : PKDetectionQueryItem
@property (nonatomic) CHPrefixQueryItem coreHandwritingPrefixQueryItem;
@property (nonatomic) NSString hashtagResult;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:;
- (id)hashtagResult;
- (void)setHashtagResult:;
- (id)coreHandwritingPrefixQueryItem;
- (void)setCoreHandwritingPrefixQueryItem:;
@end
