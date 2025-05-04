@interface AWEECOMIMDynamicCardPerfBindDataEvent : AWEECOMIMDynamicCardPerfEvent
@property (nonatomic) double exprTime;
@property (nonatomic) BOOL bindTime;
@property (nonatomic) double textBindTime;
@property (nonatomic) double imageBindTime;
@property (nonatomic) double totalTime;
- (BOOL)bindTime;
- (double)exprTime;
- (double)textBindTime;
- (double)imageBindTime;
- (void)setExprTime:;
- (void)setBindTime:;
- (void)setTextBindTime:;
- (void)setImageBindTime:;
- (double)totalTime;
- (void)setTotalTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
