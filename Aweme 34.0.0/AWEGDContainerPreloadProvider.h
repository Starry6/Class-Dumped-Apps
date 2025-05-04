@interface AWEGDContainerPreloadProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadWithBizCode:;
- (void)reportTrackWithContext:;
- (void)setBizData:forKey:;
- (id)bizDataForKey:;
- (void)preload;
- (void)updateWithContext:;
@end
