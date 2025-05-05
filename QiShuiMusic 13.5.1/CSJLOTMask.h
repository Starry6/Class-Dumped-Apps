@interface CSJLOTMask : NSObject
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL inverted;
@property (nonatomic) Q maskMode;
@property (nonatomic) CSJLOTKeyframeGroup maskPath;
@property (nonatomic) CSJLOTKeyframeGroup opacity;
@property (nonatomic) CSJLOTKeyframeGroup expansion;
- (void)_mapFromJSON:;
- (id)initWithJSON:;
- (id)opacity;
- (unsigned long long)maskMode;
- (BOOL)inverted;
- (void).cxx_destruct;
- (BOOL)closed;
- (id)maskPath;
- (id)expansion;
@end
