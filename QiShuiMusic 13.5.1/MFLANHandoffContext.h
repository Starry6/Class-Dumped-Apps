@interface MFLANHandoffContext : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) S port;
- (void)dealloc;
- (id)host;
- (void)setHost:;
- (unsigned short)port;
- (void)setPort:;
@end
