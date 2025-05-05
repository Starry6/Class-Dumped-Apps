@interface CPAnalyticsDevLogger : NSObject
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (id)initWithConfig:cpAnalyticsInstance:;
- (BOOL)disabled;
- (void)processEvent:;
@end
