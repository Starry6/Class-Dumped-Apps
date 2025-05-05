@interface TTAccountTrace : NSObject
@property (nonatomic) NSString traceId;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString uuid;
- (void)setTraceId:;
- (void)startTraceWithScene:;
- (void)stopTraceWithScene:;
- (id)init;
- (void)setScene:;
- (id)uuid;
- (void)setUuid:;
- (id)traceId;
- (id)scene;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
