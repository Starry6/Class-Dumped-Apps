@interface MTLDebugSubProgram : NSObject
@property (nonatomic) NSString filename;
@property (nonatomic) NSString name;
@property (nonatomic) I line;
- (id)filename;
- (id)release;
- (id)retain;
- (id)name;
- (unsigned int)line;
- (id)releaseInternal;
@end
