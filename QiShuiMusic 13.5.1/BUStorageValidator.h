@interface BUStorageValidator : NSObject
@property (nonatomic) NSOperationQueue queue;
@property (nonatomic) <BUStorageValidatorDelegate> delegate;
- (void)submitValidationData:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
+ (id)sharedInstance;
@end
