@interface CAUserAdjustment : NSObject
@property (nonatomic) double xDelta;
@property (nonatomic) double yDelta;
@property (nonatomic) double luminanceScale;
@property (nonatomic) double timestamp;
- (double)timestamp;
- (id)initWithXDelta:yDelta:luminanceScale:;
- (id)initWithXDelta:yDelta:luminanceScale:timestamp:;
- (double)xDelta;
- (double)yDelta;
- (double)luminanceScale;
@end
