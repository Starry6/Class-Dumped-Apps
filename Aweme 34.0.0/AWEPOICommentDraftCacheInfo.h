@interface AWEPOICommentDraftCacheInfo : NSObject
@property (nonatomic) NSString commentID;
@property (nonatomic) NSDate saveDate;
- (id)commentID;
- (void)setCommentID:;
- (void)setSaveDate:;
- (id)saveDate;
- (long long)compareBySaveDate:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
