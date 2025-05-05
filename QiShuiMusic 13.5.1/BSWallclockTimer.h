@interface BSWallclockTimer : NSObject
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
- (double)timeRemaining;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (void)invalidate;
- (void)scheduleForDate:leewayInterval:queue:handler:;
@end
