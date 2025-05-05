@interface AWEIMSkylightLocalResort : NSObject
@property (nonatomic) <AWEIMSkylightLocalResortDelegate> delegate;
- (void)performLocalResortIfNeeded;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (BOOL)isOnlineWithModel:;
+ (id)resortArray:;
+ (id)resortOrderedSet:;
+ (BOOL)shouldResortArray:;
@end
