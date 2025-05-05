@interface AVExecutionEnvironment : NSObject
@property (nonatomic) NSString platformIdentifier;
- (id)platformIdentifier;
+ (id)currentPlatformIdentifier;
+ (id)sharedExecutionEnvironment;
+ (void)setPlatformIdentifier:forQueue:;
+ (void)resetPlatformIdentifierForQueue:;
@end
