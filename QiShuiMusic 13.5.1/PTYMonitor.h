@interface PTYMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)needUploadWithService:;
+ (void)trackService:metric:category:extra:;
+ (void)setup:;
@end
