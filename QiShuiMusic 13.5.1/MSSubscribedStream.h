@interface MSSubscribedStream : NSObject
@property (nonatomic) NSString streamID;
@property (nonatomic) NSString ctag;
- (id)ctag;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setCtag:;
- (id)description;
- (id)streamID;
- (id)initWithStreamID:;
- (void)setStreamID:;
+ (BOOL)supportsSecureCoding;
+ (id)subscribedStreamWithStreamID:;
@end
