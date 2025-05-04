@interface AWERepostManagerPostCommentConfig : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEAwemeModel fromAweme;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString replyCommentID;
@property (nonatomic) NSString replyUid;
@property (nonatomic) q replyFollowStatus;
@property (nonatomic) NSDictionary extraLog;
- (void)setEnterFrom:;
- (id)aweme;
- (void)setAweme:;
- (id)enterFrom;
- (void)setReplyCommentID:;
- (id)replyCommentID;
- (id)extraLog;
- (void)setExtraLog:;
- (void)setReplyFollowStatus:;
- (void)setReplyUid:;
- (void)setFromAweme:;
- (id)fromAweme;
- (id)replyUid;
- (long long)replyFollowStatus;
- (void)setPageType:;
- (void).cxx_destruct;
- (id)pageType;
@end
