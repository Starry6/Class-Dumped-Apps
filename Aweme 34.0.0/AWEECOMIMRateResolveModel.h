@interface AWEECOMIMRateResolveModel : NSObject
@property (nonatomic) NSString resolveTitle;
@property (nonatomic) NSString commentKey;
@property (nonatomic) NSArray resolveTagList;
@property (nonatomic) q maxCountForRow;
- (id)resolveTitle;
- (long long)maxCountForRow;
- (id)resolveTagList;
- (id)commentKey;
- (void)setMaxCountForRow:;
- (void)setResolveTitle:;
- (void)setCommentKey:;
- (void)setResolveTagList:;
- (void).cxx_destruct;
- (id)initWithDict:;
@end
