@interface AWEGuideLunaPopViewCommentInfo : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) q countDigged;
@property (nonatomic) AWEGuideLunaPopViewCommentUserInfo user;
@property (nonatomic) q commentSource;
@property (nonatomic) q createTime;
- (long long)countDigged;
- (void)setCountDigged:;
- (long long)commentSource;
- (void)setCommentSource:;
- (id)user;
- (void)setUser:;
- (long long)createTime;
- (id)content;
- (void)setCreateTime:;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
