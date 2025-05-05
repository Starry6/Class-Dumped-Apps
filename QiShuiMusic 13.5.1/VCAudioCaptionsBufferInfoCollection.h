@interface VCAudioCaptionsBufferInfoCollection : NSObject
@property (nonatomic) NSArray streamTokens;
- (void)dealloc;
- (id)description;
- (id)initWithBufferLength:;
- (id)streamTokens;
@end
