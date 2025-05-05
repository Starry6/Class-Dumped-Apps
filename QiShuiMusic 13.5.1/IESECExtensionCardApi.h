@interface IESECExtensionCardApi : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString extensionCardParams;
@property (nonatomic) <IESECHTTPRequestTask> requestTask;
- (id)extensionCardParams;
- (void)fetchExtensionCardWithCompletion:;
- (id)secUserID;
- (void)setExtensionCardParams:;
- (void)setSecUserID:;
- (id)userID;
- (void)setRequestTask:;
- (void).cxx_destruct;
- (id)requestTask;
- (void)setUserID:;
@end
