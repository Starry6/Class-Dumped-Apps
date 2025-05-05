@interface CHPostProcessingManager : NSObject
@property (nonatomic) NSArray sequence;
- (id)init;
- (void)setSequence:;
- (id)initWithSequence:;
- (void).cxx_destruct;
- (id)sequence;
- (id)initWithStep:;
- (id)process:options:;
@end
