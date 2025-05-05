@interface MRPlayerClientPropertiesMessage : MRProtocolMessage
@property (nonatomic) NSDate lastPlayingDate;
@property (nonatomic) MRPlayerPath playerPath;
- (id)lastPlayingDate;
- (unsigned long long)type;
- (id)playerPath;
- (id)initWithPlayerPath:lastPlayingDate:;
@end
