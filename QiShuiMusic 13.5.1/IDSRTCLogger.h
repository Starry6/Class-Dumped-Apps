@interface IDSRTCLogger : NSObject
@property (nonatomic) S category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCategory:;
- (void)logMetric:;
- (unsigned short)category;
+ (id)loggerWithCategory:;
@end
