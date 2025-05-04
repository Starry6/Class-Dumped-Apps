@interface AWEECOMIMRateResultModel : NSObject
@property (nonatomic) NSString stars;
@property (nonatomic) NSArray tagList;
@property (nonatomic) NSString commitedRemark;
@property (nonatomic) NSString commentValue;
- (id)tagList;
- (void)setTagList:;
- (void)setStars:;
- (id)commentValue;
- (id)initWithDict:commentKey:;
- (id)commitedRemark;
- (void)setCommitedRemark:;
- (void)setCommentValue:;
- (void).cxx_destruct;
- (id)stars;
@end
