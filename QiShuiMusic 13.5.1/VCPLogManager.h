@interface VCPLogManager : NSObject
@property (nonatomic) NSInteger logLevel;
- (id)init;
- (int)logLevel;
+ (id)dateFormatter;
+ (id)sharedLogManager;
@end
