@interface LMTrialDataSource : NSObject
@property (nonatomic) NSNotificationCenter notificationCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startWithParametersUpdateCallback:;
- (id)notificationCenter;
- (id)loadParametersWithLocaleIdentifier:;
@end
