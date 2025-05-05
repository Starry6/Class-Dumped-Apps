@interface PTYUserException : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackAllThreads:skippedDepth:params:filters:;
+ (void)trackCurrentThreads:skippedDepth:params:filters:;
+ (void)setup:;
@end
