@interface IESLiveLinkmicGridLayoutCalculator : NSObject
@property (nonatomic) IESLiveLinkmicCanvasLayoutGrid config;
@property (nonatomic) {?={CGRect={CGPoint=dd}{CGSize=dd}}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}} params;
@property (nonatomic) NSArray fixedSlotSessionRects;
@property (nonatomic) NSArray fixedSlotRects;
@property (nonatomic) NSArray fixedSlotInsets;
@property (nonatomic) NSArray fixedSeparatorSlotRects;
@property (nonatomic) NSArray slotRects;
@property (nonatomic) NSArray slotInset;
@property (nonatomic) NSArray streamSlotRects;
@property (nonatomic) NSArray separatorRects;
- (id)streamSlotRects;
- (id)fixedSlotInsets;
- (void)calculateFixedSizeSeparatorsRect;
- (void)calculateFixedSizeSlotsInset;
- (void)calculateFixedSizeSlotsRect;
- (void)calculateFixedSizeStreamLayoutSlotsRect;
- (id)calculateRectsWithMainSlotOrigin:mainSlotRatio:mainSlotOriginOffset:otherSlotOrigin:otherSlotRatio:;
- (id)containerRect;
- (id)fixedSeparatorSlotRects;
- (id)fixedSlotRects;
- (id)fixedSlotSessionRects;
- (id)initWithConfig:params:;
- (id)mainSlotSessionViewSize;
- (id)mainSlotSessionViewSizeWithContainerRect:;
- (id)otherSlotSessionViewSize;
- (id)otherSlotSessionViewSizeWithContainerRect:;
- (id)separatorRects;
- (void)setFixedSeparatorSlotRects:;
- (void)setFixedSlotInsets:;
- (void)setFixedSlotRects:;
- (void)setFixedSlotSessionRects:;
- (id)slotInset;
- (id)slotRectWithIndex:;
- (id)slotRects;
- (void)validate;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
- (id)params;
- (void)setParams:;
- (void)validateConfig;
- (void)calculate;
+ (id)calculatorWithConfig:containerRect:;
+ (id)calculatorWithConfig:params:;
@end
