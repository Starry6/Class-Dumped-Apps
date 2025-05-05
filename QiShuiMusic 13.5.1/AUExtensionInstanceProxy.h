@interface AUExtensionInstanceProxy : NSObject
@property (nonatomic) ^v auInstance;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)auInstance;
- (void)setAuInstance:;
@end
