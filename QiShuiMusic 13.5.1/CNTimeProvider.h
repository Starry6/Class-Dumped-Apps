@interface CNTimeProvider : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)timestamp;
+ (id)defaultProvider;
@end
