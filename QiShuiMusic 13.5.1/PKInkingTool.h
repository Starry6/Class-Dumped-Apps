@interface PKInkingTool : PKTool
@property (nonatomic) NSString inkType;
@property (nonatomic) UIColor color;
@property (nonatomic) double width;
@property (nonatomic) PKInk ink;
- (id)color;
- (double)width;
- (id)description;
- (id)inkType;
- (id)initWithInkType:color:width:;
- (id)initWithInkType:color:;
- (id)initWithInk:width:;
+ (double)defaultWidthForInkType:;
+ (double)minimumWidthForInkType:;
+ (double)maximumWidthForInkType:;
+ (id)convertColor:fromUserInterfaceStyle:to:;
+ (double)_widthForWeight:type:;
+ (double)_weightForWidth:type:;
+ (BOOL)_isUsingSystemColorPicker;
+ (id)_contextForStroke:weight:type:;
+ (double)_calculateWidthForWeight:type:;
+ (double)_calculateEdgeWidthForWeight:type:;
+ (id)behaviorForInkType:;
+ (void)_computeWeightInfoMapFor:in:;
+ (id)_weightInfoMap;
@end
