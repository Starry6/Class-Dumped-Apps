@interface IESLiveSaasMatchShareTicketModel : NSObject
@property (nonatomic) NSArray imageURLList;
@property (nonatomic) BOOL isHiddenLogo;
@property (nonatomic) NSString shareSchema;
@property (nonatomic) NSString ticketNum;
@property (nonatomic) NSDictionary shareExtraInfo;
@property (nonatomic) NSDictionary reposterExtraInfo;
@property (nonatomic) @? dismissCallBack;
- (id)dismissCallBack;
- (void)setShareSchema:;
- (id)imageURLList;
- (BOOL)isHiddenLogo;
- (id)reposterExtraInfo;
- (void)setDismissCallBack:;
- (void)setImageURLList:;
- (void)setIsHiddenLogo:;
- (void)setReposterExtraInfo:;
- (void)setShareExtraInfo:;
- (void)setTicketNum:;
- (id)shareExtraInfo;
- (id)shareSchema;
- (id)ticketNum;
- (void).cxx_destruct;
@end
