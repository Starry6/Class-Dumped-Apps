@interface SGMSearchResultsUserSelectedContact : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:wasSuggestedContact:wasKnownContact:app:;
@end
