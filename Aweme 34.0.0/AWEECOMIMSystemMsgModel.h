@interface AWEECOMIMSystemMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) YYTextLayout textLayout;
@property (nonatomic) NSString tipContent;
@property (nonatomic) BOOL isUnKnownMessageBodyType;
@property (nonatomic) {CGSize=dd} textLayoutSize;
@property (nonatomic) BOOL showBubbleBg;
- (id)initWithMessage:unknownMessageBodyType:;
- (BOOL)showBubbleBg;
- (void)setIsUnKnownMessageBodyType:;
- (BOOL)isUnKnownMessageBodyType;
- (void)setShowBubbleBg:;
- (id)textLayoutSize;
- (void)setTextLayoutSize:;
- (void).cxx_destruct;
- (id)initWithMessage:;
- (void)setTextLayout:;
- (id)textLayout;
- (void)setTipContent:;
- (id)tipContent;
+ (Class)cellClass;
@end
