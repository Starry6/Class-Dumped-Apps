@interface AWEIMMangoShareClickInfo : NSObject
@property (nonatomic) BOOL closePage;
@property (nonatomic) BOOL needEnterConversation;
@property (nonatomic) NSString openSchema;
@property (nonatomic) BOOL needWithText;
@property (nonatomic) BOOL disableTextInFloatMode;
@property (nonatomic) BOOL disableAutoClickToast;
@property (nonatomic) BOOL keepTapBeforeCompletion;
- (BOOL)needWithText;
- (BOOL)disableTextInFloatMode;
- (BOOL)closePage;
- (BOOL)needEnterConversation;
- (id)openSchema;
- (BOOL)keepTapBeforeCompletion;
- (BOOL)disableAutoClickToast;
- (void)setOpenSchema:;
- (void)setNeedWithText:;
- (void)setDisableTextInFloatMode:;
- (void)setDisableAutoClickToast:;
- (void)setClosePage:;
- (void)setNeedEnterConversation:;
- (void)setKeepTapBeforeCompletion:;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
