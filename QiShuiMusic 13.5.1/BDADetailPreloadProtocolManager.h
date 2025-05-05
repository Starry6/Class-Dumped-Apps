@interface BDADetailPreloadProtocolManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventData:;
- (void)monitorService:value:extra:;
- (id)preloadV2URL;
- (void)requestForBinaryWithURL:params:method:timeout:callback:;
- (id)init;
+ (id)detailPreloadProtocolImp;
+ (id)sharedInstance;
@end
