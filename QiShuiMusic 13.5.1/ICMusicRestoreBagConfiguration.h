@interface ICMusicRestoreBagConfiguration : NSObject
@property (nonatomic) NSArray allowedKinds;
@property (nonatomic) NSArray allowedMatchStatus;
@property (nonatomic) NSURL restoreURL;
@property (nonatomic) BOOL shouldGZip;
- (void).cxx_destruct;
- (id)initWithServerConfiguration:;
- (id)allowedKinds;
- (id)allowedMatchStatus;
- (id)restoreURL;
- (BOOL)shouldGZip;
@end
