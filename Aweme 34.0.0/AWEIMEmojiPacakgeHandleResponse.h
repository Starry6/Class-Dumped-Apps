@interface AWEIMEmojiPacakgeHandleResponse : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) BOOL reachLimit;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (BOOL)reachLimit;
- (void)setReachLimit:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
