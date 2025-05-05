@interface BDARVPatchADModel : NSObject
@property (nonatomic) q patchType;
@property (nonatomic) BOOL isFullScreen;
- (id)initWithPatchAdType:;
- (id)initWithPatchAdType:isFullScreen:;
- (BOOL)isFullScreen;
- (long long)patchType;
- (void)setIsFullScreen:;
@end
