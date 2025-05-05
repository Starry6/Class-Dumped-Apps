@interface CLNotifierClientAdapter : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithClient:;
- (id)init;
- (BOOL)valid;
- (void)setValid:;
- (id)debugDescription;
- (void)onNotification:withData:;
- (void)invalidate;
+ (void)becameFatallyBlocked:index:;
+ (void)performSyncOnSilo:invoker:;
@end
