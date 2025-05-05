@interface SWSystemActivityAcquisitionDetails : NSObject
@property (nonatomic) BOOL afterPendingSleepWasAlreadyInitiated;
@property (nonatomic) BOOL afterFailingToRevertPendingSleep;
@property (nonatomic) BOOL afterSleepOfNonZeroDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAfterPendingSleepWasAlreadyInitiated:afterFailingToRevertPendingSleep:afterSleepOfNonZeroDuration:;
- (BOOL)afterSleepOfNonZeroDuration;
- (BOOL)afterFailingToRevertPendingSleep;
- (id)description;
- (BOOL)afterPendingSleepWasAlreadyInitiated;
@end
