@interface BDXSchemaMonitor : NSObject
@property (nonatomic) BDXContext context;
@property (nonatomic) NSString aid;
@property (nonatomic) NSString bid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logWithMessage:;
- (id)bid;
- (void)reportWithEvent:schemaData:info:error:metrics:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)aid;
@end
