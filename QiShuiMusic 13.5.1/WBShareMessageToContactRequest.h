@interface WBShareMessageToContactRequest : WBBaseRequest
@property (nonatomic) NSString object_id;
@property (nonatomic) NSString short_url;
@property (nonatomic) WBMessageObject message;
- (BOOL)canBeReceived;
- (void)setShort_url:;
- (id)short_url;
- (void)storeToDictionary:;
- (id)validate;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (void)setObject_id:;
- (id)object_id;
- (BOOL)canBeSent;
- (void)loadFromDictionary:;
+ (Class)associateResponseClass;
+ (void)requestWithMessage:;
@end
