@interface WBSTabCompletionMatch : WBSURLCompletionMatch
@property (nonatomic) NSURL url;
@property (nonatomic) NSString title;
- (id)url;
- (id)title;
- (void).cxx_destruct;
- (id)userVisibleURLString;
- (id)originalURLString;
- (id)initWithUserTypedString:url:title:forQueryID:;
+ (long long)_matchLocationForString:url:title:;
@end
