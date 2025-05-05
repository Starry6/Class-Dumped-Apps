@interface MTLDebugLocation : NSObject
@property (nonatomic) MTLDebugSubProgram scope;
@property (nonatomic) I line;
@property (nonatomic) I column;
@property (nonatomic) MTLDebugLocation inlinedAt;
- (void)dealloc;
- (id)formattedDescription:;
- (id)scope;
- (id)release;
- (id)retain;
- (id)description;
- (unsigned int)line;
- (unsigned int)column;
- (id)inlinedAt;
- (id)releaseInternal;
@end
