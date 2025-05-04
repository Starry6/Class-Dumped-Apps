@interface AWEIMContextServiceAssembly : NSObject
@property (nonatomic) Q assembleStage;
@property (nonatomic) BOOL hasAssembled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAssembleStage:;
- (void)assembleWithContainer:;
- (void)containerLoaded:;
- (unsigned long long)assembleStage;
- (BOOL)hasAssembled;
- (void)setHasAssembled:;
@end
