@interface AWEUGPendantNewCapsuleContentCountdown : MTLModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString firstShowBubbleText;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} expandUIFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} foldUIFrame;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expandUIFrame;
- (id)foldUIFrame;
- (void)setExpandUIFrame:;
- (void)setFoldUIFrame:;
- (id)firstShowBubbleText;
- (void)setFirstShowBubbleText:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (double)startTime;
- (id)textColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
