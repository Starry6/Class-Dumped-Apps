@interface BDBaseInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adaptiveDecodePolicy;
- (BOOL)isSupportSuperResolution;
- (void)setMonitorEvent:params:;
- (void)setMonitorEvent:recorder:;
- (void)startUpWithConfig:;
+ (void)trackAndCallback:attributes:extra0:extra1:needCallback:;
@end
