@interface ATSpatialStreamParameters : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) AVAudioFormat format;
- (id)init;
- (id)format;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isEnabled;
- (id)initInternalWithFormat:;
- (BOOL)enableStreamWithIdentifier:error:;
- (void)disableStream;
@end
