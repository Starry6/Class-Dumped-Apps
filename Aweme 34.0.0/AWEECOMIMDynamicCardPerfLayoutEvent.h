@interface AWEECOMIMDynamicCardPerfLayoutEvent : AWEECOMIMDynamicCardPerfEvent
@property (nonatomic) double textLayoutTime;
@property (nonatomic) double totalTime;
- (double)textLayoutTime;
- (void)setTextLayoutTime:;
- (double)totalTime;
- (void)setTotalTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
