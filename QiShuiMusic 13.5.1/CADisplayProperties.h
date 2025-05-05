@interface CADisplayProperties : NSObject
@property (nonatomic) I updateMask;
@property (nonatomic) BOOL dmrrEnabled;
@property (nonatomic) CADisplayMode currentMode;
@property (nonatomic) NSString overscanAdjustment;
@property (nonatomic) {CGSize=dd} logicalScale;
@property (nonatomic) Q pointScale;
@property (nonatomic) I connectionSeed;
- (id)overscanAdjustment;
- (id)init;
- (void)dealloc;
- (void)setOverscanAdjustment:;
- (unsigned int)connectionSeed;
- (unsigned long long)pointScale;
- (id)logicalScale;
- (id)currentMode;
- (void)setCurrentMode:;
- (unsigned int)updateMask;
- (void)setUpdateMask:;
- (void)clearUpdateMask;
- (BOOL)needsUpdateForField:;
- (BOOL)dmrrEnabled;
- (void)setDmrrEnabled:;
- (void)setConnectionSeed:;
- (void)setLogicalScale:;
- (void)setPointScale:;
@end
