@interface SwiftUITextStorage : NSConcreteTextStorage
@property (nonatomic) double _baselineDelta;
@property (nonatomic) BOOL _forceWordWrapping;
@property (nonatomic) BOOL _wrappedByCluster;
@property (nonatomic) double defaultTighteningFactor;
- (BOOL)_forceWordWrapping;
- (double)defaultTighteningFactor;
- (void)setDefaultTighteningFactor:;
- (void)_setForceWordWrapping:;
- (BOOL)_baselineMode;
- (BOOL)_isStringDrawingTextStorage;
- (void)_setWrappedByCluster:;
- (double)_baselineDelta;
- (BOOL)_wrappedByCluster;
- (void)_setBaselineDelta:;
@end
