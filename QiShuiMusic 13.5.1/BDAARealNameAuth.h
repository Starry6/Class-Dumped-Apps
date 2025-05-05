@interface BDAARealNameAuth : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)metaSecReportForScene:;
- (void)realNameAuthWithPassword:completion:;
+ (id)sharedInstance;
@end
