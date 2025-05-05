@interface BSContinuousMachTimer : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) double timeRemaining;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (id)identifier;
- (BOOL)isScheduled;
- (id)debugDescription;
- (void)scheduleWithFireInterval:leewayInterval:queue:handler:;
- (double)timeRemaining;
- (void).cxx_destruct;
- (id)description;
- (void)scheduleRepeatingWithFireInterval:repeatInterval:leewayInterval:queue:handler:;
- (id)initWithIdentifier:;
- (void)invalidate;
@end
