@interface AWEGDeliveryPreloadProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preload:;
- (BOOL)enablePreload;
- (void)reportTrackWithContext:;
- (void)setBizData:forKey:;
- (id)bizDataForKey:;
- (id)supportPreloadSchemas;
- (BOOL)optimizeMemoryEnable;
- (BOOL)supportPreloadWithType:;
- (void)preload;
- (void)updateWithContext:;
@end
