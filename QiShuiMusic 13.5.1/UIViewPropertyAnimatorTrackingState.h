@interface UIViewPropertyAnimatorTrackingState : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) BOOL startPaused;
@property (nonatomic) BOOL scrubsLinearly;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL optimizationsEnabled;
@property (nonatomic) BOOL shouldLayoutSubviews;
- (BOOL)scrubsLinearly;
- (id)init;
- (id)uuid;
- (void)setUserInteractionEnabled:;
- (void)setStartPaused:;
- (void)setScrubsLinearly:;
- (void).cxx_destruct;
- (BOOL)userInteractionEnabled;
- (BOOL)optimizationsEnabled;
- (BOOL)shouldLayoutSubviews;
- (void)setShouldLayoutSubviews:;
- (BOOL)startPaused;
- (void)setOptimizationsEnabled:;
@end
