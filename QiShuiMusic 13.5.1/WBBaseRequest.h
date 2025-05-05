@interface WBBaseRequest : WBDataTransferObject
@property (nonatomic) NSString requestID;
@property (nonatomic) <WeiboSDKRequestDelegate> delegate;
- (BOOL)canAssociateWithResponse:;
- (BOOL)canHandleByWeiboClientApp;
- (BOOL)canNotHandleByWeiboClientApp;
- (void)storeToDictionary:;
- (id)objectID;
- (void)setObjectID:;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
- (void)loadFromDictionary:;
+ (Class)associateResponseClass;
+ (id)mappedObjectWithDictionary:;
+ (void)nothing;
+ (id)request;
+ (id)transferType;
@end
