@interface BMCoreDuetWebUsageSource : NSObject
@property (nonatomic) <BMCoreDuetWebUsageStore> storage;
@property (nonatomic) NSString identifier;
- (id)initWithSource:;
- (void)sendEvent:;
- (void)setStorage:;
- (id)identifier;
- (id)storage;
- (void).cxx_destruct;
@end
