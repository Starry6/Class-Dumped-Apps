@interface EDNonAcceptingServer : NSObject
@property (nonatomic) NSMutableArray listeners;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setListeners:;
- (id)listeners;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)initWithMachServiceNames:;
+ (id)log;
@end
