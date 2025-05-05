@interface BWNodeInputMediaConfiguration : NSObject
@property (nonatomic) BWFormatRequirements formatRequirements;
@property (nonatomic) NSInteger passthroughMode;
@property (nonatomic) BOOL conversionToPassthroughModeNeverAllowed;
@property (nonatomic) NSInteger retainedBufferCount;
@property (nonatomic) NSInteger delayedBufferCount;
@property (nonatomic) NSInteger indefinitelyHeldBufferCount;
- (int)delayedBufferCount;
- (id)init;
- (id)formatRequirements;
- (void)dealloc;
- (int)passthroughMode;
- (void)setFormatRequirements:;
- (void)setRetainedBufferCount:;
- (void)setIndefinitelyHeldBufferCount:;
- (void)setDelayedBufferCount:;
- (BOOL)conversionToPassthroughModeNeverAllowed;
- (void)setPassthroughMode:;
- (int)retainedBufferCount;
- (int)indefinitelyHeldBufferCount;
- (void)_setAssociatedAttachedMediaKey:;
- (void)setConversionToPassthroughModeNeverAllowed:;
@end
