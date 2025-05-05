@interface CalRoute : NSObject
@property (nonatomic) CalLocation start;
@property (nonatomic) CalLocation end;
@property (nonatomic) double duration;
@property (nonatomic) NSString route;
- (void)setEnd:;
- (void)setStart:;
- (id)end;
- (void)setRoute:;
- (id)start;
- (id)route;
- (id)initWithCoder:;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)duration;
+ (BOOL)supportsSecureCoding;
@end
