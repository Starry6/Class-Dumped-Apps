@interface AWEPOIAnchorBubbleModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString bubbleColor;
@property (nonatomic) AWEPOIFrequencyControlModel frequencyControl;
@property (nonatomic) AWEPOIAnchorBubbleDisplayTime displayTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frequencyControl;
- (void)setFrequencyControl:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setDisplayTime:;
- (id)displayTime;
- (void)setBubbleColor:;
- (id)bubbleColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
