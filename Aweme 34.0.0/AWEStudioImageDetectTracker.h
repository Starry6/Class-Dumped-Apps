@interface AWEStudioImageDetectTracker : NSObject
@property (nonatomic) NSMutableDictionary timestamps;
- (void)markStep:;
- (void)trackWithResult:;
- (id)init;
- (id)timestamps;
- (void).cxx_destruct;
- (void)setTimestamps:;
@end
