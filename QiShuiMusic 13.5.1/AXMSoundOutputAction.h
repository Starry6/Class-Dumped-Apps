@interface AXMSoundOutputAction : AXMOutputAction
@property (nonatomic) NSURL soundFileURL;
@property (nonatomic) NSString soundID;
- (id)initWithURL:;
- (id)soundFileURL;
- (void).cxx_destruct;
- (id)soundID;
- (id)_initWithURL:handle:;
- (id)_initWithSoundID:handle:;
- (id)initWithSoundID:;
+ (id)_soundFileURLForSoundID:;
@end
