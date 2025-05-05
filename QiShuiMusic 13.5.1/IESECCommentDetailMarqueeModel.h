@interface IESECCommentDetailMarqueeModel : MTLModel
@property (nonatomic) NSString userAvatar;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString marqueeMessage;
@property (nonatomic) q messageType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)marqueeMessage;
- (void)setMarqueeMessage:;
- (void)setUserAvatar:;
- (id)userAvatar;
- (long long)messageType;
- (id)userName;
- (void)setUserName:;
- (void).cxx_destruct;
- (void)setMessageType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
