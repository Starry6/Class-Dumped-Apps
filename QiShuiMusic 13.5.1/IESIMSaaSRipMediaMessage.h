@interface IESIMSaaSRipMediaMessage : AWEIMMessage
@property (nonatomic) NSInteger ripMediaType;
- (id)initWithContentDict:;
- (id)initWithContentDict:andOriginalType:;
- (int)p_CoventAWEIMMessageTypeToAWEIMRipMediaMessageSubType:;
- (int)ripMediaType;
- (void)setRipMediaType:;
- (id)displayText;
@end
