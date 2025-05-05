@interface IESLiveSaaSNoticeUploadCoverAlertModel : NSObject
@property (nonatomic) q msgType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString tipURL;
@property (nonatomic) NSString tipTitle;
- (id)initWithTitle:content:msgType:tipURL:tipTitle:;
- (void)setTipTitle:;
- (void)setTipURL:;
- (id)tipURL;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)tipTitle;
- (id)initWithTitle:content:;
- (long long)msgType;
- (void)setMsgType:;
@end
