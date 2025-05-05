@interface CMCallHandednessManager : NSObject
@property (nonatomic) <CMCallHandednessDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)startCallHandednessUpdates;
- (void)onCallHandednessStateUpdated:;
- (void)stopCallHandednessUpdates;
+ (BOOL)isCallHandednessAvailable;
@end
