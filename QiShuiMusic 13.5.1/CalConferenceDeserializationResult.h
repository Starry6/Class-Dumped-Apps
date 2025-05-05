@interface CalConferenceDeserializationResult : NSObject
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) CalVirtualConference conference;
@property (nonatomic) NSString blockTitle;
- (id)range;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithConference:range:blockTitle:;
- (id)conference;
- (id)blockTitle;
@end
