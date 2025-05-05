@interface AMSFairPlayContext : NSObject
@property (nonatomic) I contextID;
- (id)init;
- (void)dealloc;
- (unsigned int)contextID;
- (void)setContextID:;
- (void)destroyContext;
- (unsigned int)fairplayContextIDWithError:;
@end
