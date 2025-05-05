@interface PTYTaskData : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) <PTYTaskDataDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)params;
- (void)setParams:;
@end
