@interface AWEECAwemeVideoPreloader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelPreload;
- (void)startPrefetchVideo:preloadSize:tag:successBlock:failureBlock:cancelBlock:;
@end
