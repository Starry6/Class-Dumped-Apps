@interface AVResult : NSObject
@property (nonatomic) BOOL failed;
- (id)init;
- (void)dealloc;
- (void)markAsFailedWithError:;
- (void)getStatus:error:;
- (void)markAsCompleted;
- (BOOL)isFailed;
@end
