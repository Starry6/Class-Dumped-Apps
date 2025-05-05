@interface MROriginClientPropertiesMessage : MRProtocolMessage
@property (nonatomic) NSDate lastPlayingDate;
- (id)lastPlayingDate;
- (unsigned long long)type;
- (id)initWithLastPlayingDate:;
@end
