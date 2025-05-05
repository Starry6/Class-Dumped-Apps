@interface PIANSRService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearAllNSRContent;
- (BOOL)clearNSRContentForURL:;
- (void)executeNSRWithURL:configuration:;
- (id)initService;
+ (void)executeAfterPrepareTask;
+ (void)executePrepareServiceTask;
+ (void)injectBridgeGlobalAPI;
@end
