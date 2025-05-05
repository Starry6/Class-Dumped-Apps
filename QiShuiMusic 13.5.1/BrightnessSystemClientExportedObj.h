@interface BrightnessSystemClientExportedObj : NSObject
@property (nonatomic) BrightnessSystemClientInternal target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)notifyChangedProperty:value:;
- (void)registerNotificationBlock:;
- (void)unregisterNotificationBlock;
- (void)setTarget:;
- (id)target;
@end
