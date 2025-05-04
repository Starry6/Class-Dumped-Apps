@interface AWEECOMIMChatListTitleBarIconModel : NSObject
@property (nonatomic) q actionType;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString content;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString tips;
@property (nonatomic) NSString iconCodeString;
@property (nonatomic) NSString requestPage;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)requestPage;
- (void)setRequestPage:;
- (void)setIconCodeString:;
- (id)iconCodeString;
- (id)transformToClickModel;
- (id)schema;
- (long long)actionType;
- (void)setActionType:;
- (id)content;
- (void)setSchema:;
- (id)tips;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setTips:;
@end
