@interface VCBitrateRule : NSObject
@property (nonatomic) I bitrate;
@property (nonatomic) NSInteger connectionType;
@property (nonatomic) VCVideoRule limitingRule;
- (int)connectionType;
- (void)setConnectionType:;
- (void)dealloc;
- (unsigned int)bitrate;
- (long long)compare:;
- (id)description;
- (void)setBitrate:;
- (id)initWithBitrate:connectionType:limitingRule:;
- (id)limitingRule;
@end
