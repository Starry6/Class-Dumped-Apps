@interface CMFitnessMachine : NSObject
@property (nonatomic) CMFitnessMachineInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)feedFitnessMachineData:;
+ (BOOL)isAvailable;
@end
