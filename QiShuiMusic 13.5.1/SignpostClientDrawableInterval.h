@interface SignpostClientDrawableInterval : SignpostAnimationSubInterval
@property (nonatomic) I queueID;
@property (nonatomic) I surfaceID;
@property (nonatomic) Q threadID;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString processName;
@property (nonatomic) NSString executablePath;
- (id)executablePath;
- (unsigned int)surfaceID;
- (unsigned long long)threadID;
- (id)processName;
- (int)pid;
- (void).cxx_destruct;
- (id)initWithClientDrawableInterval:;
- (unsigned int)queueID;
@end
