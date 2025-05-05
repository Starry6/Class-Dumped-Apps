@interface PAAccessoryManager : NSObject
@property (nonatomic) BOOL shouldSendUpdate;
- (id)init;
- (void)sendUpdateToAccessory;
- (BOOL)shouldSendUpdate;
- (void)setShouldSendUpdate:;
+ (id)sharedInstance;
@end
