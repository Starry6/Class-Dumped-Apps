@interface AWEIMSpecialEmojiConfigModel : MTLModel
@property (nonatomic) NSString senderShow;
@property (nonatomic) NSString receiverShow;
@property (nonatomic) NSString randomShow;
@property (nonatomic) NSString continueShow;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)continueShow;
- (id)senderShow;
- (id)receiverShow;
- (void)setSenderShow:;
- (void)setReceiverShow:;
- (void)setRandomShow:;
- (void)setContinueShow:;
- (BOOL)isSenderShow;
- (BOOL)isReceiverShow;
- (id)randomShow;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
