@interface CAUserAdjustmentCommand : NSObject
@property (nonatomic) double minXDelta;
@property (nonatomic) double maxXDelta;
@property (nonatomic) double minYDelta;
@property (nonatomic) double maxYDelta;
@property (nonatomic) double minLuminanceScale;
@property (nonatomic) double maxLuminanceScale;
@property (nonatomic) CAUserAdjustment userAdjustment;
- (void)dealloc;
- (id)userAdjustment;
- (id)initWithUserAdjustment:;
- (BOOL)transformWhitePointByXDelta:yDelta:luminanceScale:;
- (double)minXDelta;
- (double)maxXDelta;
- (double)minYDelta;
- (double)maxYDelta;
- (double)minLuminanceScale;
- (double)maxLuminanceScale;
@end
