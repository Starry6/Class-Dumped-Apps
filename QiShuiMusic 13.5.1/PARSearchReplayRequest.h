@interface PARSearchReplayRequest : PARSearchRequest
@property (nonatomic) NSString replaySearchURL;
@property (nonatomic) NSDictionary replayHeaderItems;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)replaySearchURL;
- (void)setReplaySearchURL:;
- (id)replayHeaderItems;
- (void)setReplayHeaderItems:;
+ (BOOL)supportsSecureCoding;
@end
