@interface AWEDeliveryRecallMessageModel : AWEDeliveryBaseMsgModel
@property (nonatomic) NSString timeOfRecalled;
@property (nonatomic) @? messageReEditCallBack;
@property (nonatomic) NSAttributedString recallText;
@property (nonatomic) YYTextLayout textLayout;
@property (nonatomic) BOOL canReEdit;
- (void)setTimeOfRecalled:;
- (void)updateTextWithIsShowEditText;
- (id)timeOfRecalled;
- (BOOL)canReEdit;
- (id)messageReEditCallBack;
- (id)recallText;
- (void)setMessageReEditCallBack:;
- (void).cxx_destruct;
- (id)initWithMessage:;
- (id)textLayout;
+ (Class)cellClass;
@end
