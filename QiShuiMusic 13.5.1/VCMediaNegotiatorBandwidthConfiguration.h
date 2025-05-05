@interface VCMediaNegotiatorBandwidthConfiguration : NSObject
@property (nonatomic) NSInteger mode;
@property (nonatomic) NSInteger connectionType;
@property (nonatomic) I maxBandwidth;
@property (nonatomic) BOOL isDefaultMode;
- (int)connectionType;
- (void)setConnectionType:;
- (int)mode;
- (BOOL)isEqual:;
- (void)setMode:;
- (unsigned int)maxBandwidth;
- (void)setMaxBandwidth:;
- (id)initWithConnectionType:maxBandwidth:;
- (id)initWithMode:connectionType:maxBandwidth:;
- (BOOL)isDefaultMode;
- (void)setIsDefaultMode:;
@end
