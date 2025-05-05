@interface AXMSettings : NSObject
@property (nonatomic) BOOL writeOutInputImages;
@property (nonatomic) BOOL writeOutOCRInputImages;
@property (nonatomic) BOOL writeOutScreenCaptures;
@property (nonatomic) BOOL useANODModelForAXElementVision;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:forSeetting:withBlock:;
- (void)removeObserver:forSetting:;
- (void)_queue_removeObserver:forSetting:;
- (void)removeObserverForAllSettings:;
- (BOOL)writeOutInputImages;
- (void)setWriteOutInputImages:;
- (BOOL)writeOutOCRInputImages;
- (void)setWriteOutOCRInputImages:;
- (BOOL)writeOutScreenCaptures;
- (void)setWriteOutScreenCaptures:;
- (BOOL)useANODModelForAXElementVision;
- (void)setUseANODModelForAXElementVision:;
+ (id)settings;
@end
