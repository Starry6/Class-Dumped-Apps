@interface TTVideoEngineStateWrapper : NSObject
@property (nonatomic) TTVideoEngine videoEngine;
@property (nonatomic) BOOL hasSet;
- (void)setVideoEngine:;
- (id)videoEngine;
- (id)initWithEngine:;
- (void).cxx_destruct;
- (BOOL)hasSet;
- (void)setHasSet:;
@end
