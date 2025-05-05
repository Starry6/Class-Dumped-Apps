@interface CMPickupManager : NSObject
@property (nonatomic) <CMPickupDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)startPickupUpdates;
- (void)stopPickupUpdates;
- (void)onPickupStateUpdated:;
+ (BOOL)isPickupAvailable;
@end
