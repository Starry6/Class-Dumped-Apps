@interface AWEMultiAccountNoticeResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray counts;
- (long long)totalUnreadCount;
- (BOOL)hasNewUnreadNotice;
- (id)counts;
- (void).cxx_destruct;
- (void)setCounts:;
+ (id)countsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
