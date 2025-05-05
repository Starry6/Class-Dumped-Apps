@interface PIAMessageActionNativeService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initService;
- (void)invokeNativeAPI:engine:href:;
+ (void)executePrepareServiceTask;
@end
