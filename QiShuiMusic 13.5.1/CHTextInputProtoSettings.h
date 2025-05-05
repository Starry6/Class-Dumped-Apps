@interface CHTextInputProtoSettings : NSObject
@property (nonatomic) BOOL isScribbleActive;
@property (nonatomic) BOOL autoLineBreakEnabled;
@property (nonatomic) BOOL autoLineBreakRequireWeakCursor;
@property (nonatomic) double autoLineBreakMinVerticalDistance;
@property (nonatomic) double autoLineBreakDualBreakVerticalDistance;
@property (nonatomic) double autoLineBreakAreaWidthFactor;
@property (nonatomic) BOOL lineBreakVerticalBarGestureEnabled;
@property (nonatomic) BOOL lineBreakVerticalBarUpToDelete;
@property (nonatomic) double subwordGestureEndingSpeedRange;
@property (nonatomic) double subwordGestureSpeedThreshold;
@property (nonatomic) BOOL preventLeftoverCharsInSubwordGestures;
- (BOOL)isScribbleActive;
- (double)subwordGestureEndingSpeedRange;
- (double)subwordGestureSpeedThreshold;
- (BOOL)preventLeftoverCharsInSubwordGestures;
- (BOOL)lineBreakVerticalBarGestureEnabled;
- (BOOL)lineBreakVerticalBarUpToDelete;
- (BOOL)autoLineBreakEnabled;
- (BOOL)autoLineBreakRequireWeakCursor;
- (double)autoLineBreakAreaWidthFactor;
- (double)autoLineBreakMinVerticalDistance;
- (double)autoLineBreakDualBreakVerticalDistance;
+ (id)sharedSettings;
@end
